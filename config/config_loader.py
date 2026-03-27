"""
LLM Configuration Loader

统一加载和管理 LLM 配置，支持：
1. 从 JSON 文件读取配置
2. 环境变量替换 (${VAR_NAME} 语法)
3. 命令行参数覆盖
4. 多 profile 切换
"""

import os
import re
import json
from pathlib import Path
from typing import Dict, Any, Optional, List, Tuple

# 配置文件路径 (相对于项目根目录)
CONFIG_DIR = Path(__file__).parent
CONFIG_FILE = CONFIG_DIR / "llm_config.json"
KEY_INVENTORY_FILE = CONFIG_DIR / "llm_key_inventory.json"


def _expand_env_vars(value: Any) -> Any:
    """
    递归替换配置值中的环境变量。
    支持 ${VAR_NAME} 语法。
    """
    if isinstance(value, str):
        # 匹配 ${VAR_NAME} 模式
        pattern = r'\$\{([^}]+)\}'
        matches = re.findall(pattern, value)
        for var_name in matches:
            env_value = os.environ.get(var_name, "")
            value = value.replace(f"${{{var_name}}}", env_value)
        return value
    elif isinstance(value, dict):
        return {k: _expand_env_vars(v) for k, v in value.items()}
    elif isinstance(value, list):
        return [_expand_env_vars(item) for item in value]
    return value


def load_config(config_path: Optional[Path] = None) -> Dict[str, Any]:
    """
    加载 LLM 配置文件。
    
    Args:
        config_path: 可选，指定配置文件路径
        
    Returns:
        完整配置字典
    """
    path = config_path or CONFIG_FILE
    
    if not path.exists():
        raise FileNotFoundError(f"LLM config file not found: {path}")
    
    with open(path, 'r', encoding='utf-8') as f:
        config = json.load(f)
    
    return config


def load_key_inventory(inventory_path: Optional[Path] = None) -> Dict[str, Any]:
    """
    加载 LLM Key Inventory。

    Args:
        inventory_path: 可选，指定 inventory 文件路径

    Returns:
        inventory 字典
    """
    path = inventory_path or KEY_INVENTORY_FILE

    if not path.exists():
        raise FileNotFoundError(f"LLM key inventory file not found: {path}")

    with open(path, 'r', encoding='utf-8') as f:
        return json.load(f)


def _normalize_inventory(inventory: Dict[str, Any]) -> Dict[str, Dict[str, Any]]:
    keys = inventory.get('keys', {})
    if not isinstance(keys, dict):
        raise ValueError("Key inventory must contain a 'keys' object")
    return _expand_env_vars(keys)


def list_key_inventory(
    provider: Optional[str] = None,
    inventory: Optional[Dict[str, Any]] = None
) -> List[Dict[str, Any]]:
    """
    列出 inventory 中的 key 记录。

    Args:
        provider: 可选，按 provider 过滤
        inventory: 可选，已加载的 inventory 字典

    Returns:
        key 记录列表，每项包含 alias / provider / api_key / label 等字段
    """
    if inventory is None:
        inventory = load_key_inventory()

    records = []
    for alias, record in _normalize_inventory(inventory).items():
        if provider and record.get('provider') != provider:
            continue
        item = dict(record)
        item['alias'] = alias
        records.append(item)
    return records


def resolve_key_alias(
    alias: str,
    inventory: Optional[Dict[str, Any]] = None
) -> Dict[str, Any]:
    """
    解析单个 key alias。
    """
    if inventory is None:
        inventory = load_key_inventory()

    keys = _normalize_inventory(inventory)
    if alias not in keys:
        available = ", ".join(keys.keys())
        raise ValueError(f"Unknown key alias '{alias}'. Available: {available}")

    record = dict(keys[alias])
    record['alias'] = alias
    return record


def get_profile_key_inventory(
    profile_name: Optional[str] = None,
    config: Optional[Dict[str, Any]] = None,
    inventory: Optional[Dict[str, Any]] = None
) -> List[Dict[str, Any]]:
    """
    获取某个 profile 当前可选择的 key 列表（已按 preferred_key_aliases 排序）。
    """
    profile = get_profile(profile_name, config=config)
    provider = profile.get('key_provider')
    compatible = list_key_inventory(provider=provider, inventory=inventory)
    return _order_key_records(compatible, profile.get('preferred_key_aliases', []))


def _order_key_records(records: List[Dict[str, Any]], preferred_aliases: List[str]) -> List[Dict[str, Any]]:
    if not records:
        return []

    alias_to_record = {record['alias']: record for record in records}
    ordered_aliases = []

    for alias in preferred_aliases or []:
        if alias in alias_to_record and alias not in ordered_aliases:
            ordered_aliases.append(alias)

    for record in records:
        alias = record['alias']
        if alias not in ordered_aliases:
            ordered_aliases.append(alias)

    return [alias_to_record[alias] for alias in ordered_aliases]


def _resolve_profile_keys(
    profile: Dict[str, Any],
    inventory: Optional[Dict[str, Any]] = None,
    key_alias: Optional[str] = None
) -> Tuple[List[str], List[str]]:
    """
    根据 profile / inventory / 指定 alias 解析最终可用的 key 列表。
    """
    provider = profile.get('key_provider')

    # 1. alias 精确绑定：单进程锁死到一把 key
    if key_alias:
        selected = resolve_key_alias(key_alias, inventory=inventory)
        if provider and selected.get('provider') != provider:
            raise ValueError(
                f"Key alias '{key_alias}' belongs to provider '{selected.get('provider')}', "
                f"but profile '{profile.get('profile_name')}' requires provider '{provider}'"
            )
        api_key = selected.get('api_key', '')
        if not api_key or not api_key.strip():
            raise ValueError(f"Key alias '{key_alias}' has no valid api_key")
        return [api_key], [key_alias]

    # 2. provider 驱动：从 inventory 里取出所有兼容 key，并按 preferred_key_aliases 排序
    if provider:
        compatible = list_key_inventory(provider=provider, inventory=inventory)
        ordered_records = _order_key_records(compatible, profile.get('preferred_key_aliases', []))
        api_keys = []
        aliases = []
        for record in ordered_records:
            api_key = record.get('api_key', '')
            if api_key and api_key.strip():
                api_keys.append(api_key)
                aliases.append(record['alias'])
        if api_keys:
            return api_keys, aliases

    # 3. 向后兼容：继续支持 profile 里直接写 api_key/api_keys
    if 'api_keys' in profile:
        api_keys = profile['api_keys']
        if not isinstance(api_keys, list):
            api_keys = [api_keys]
        valid_keys = [k for k in api_keys if k and k.strip()]
        aliases = [f"{profile.get('profile_name', 'key')}-{idx + 1}" for idx in range(len(valid_keys))]
        return valid_keys, aliases

    if 'api_key' in profile:
        api_key = profile['api_key']
        if api_key and api_key.strip():
            return [api_key], [profile.get('profile_name', 'key-1')]

    raise ValueError(
        f"Profile '{profile.get('profile_name')}' missing usable key config. "
        "Expected key_provider + inventory, or api_key/api_keys."
    )


def get_profile(profile_name: Optional[str] = None, config: Optional[Dict] = None) -> Dict[str, Any]:
    """
    获取指定 profile 的配置，并展开环境变量。
    
    Args:
        profile_name: Profile 名称，如 'glm', 'qwen' 等。
                      如果为 None，使用配置文件中的 active_profile。
        config: 可选，已加载的配置字典
        
    Returns:
        展开环境变量后的 profile 配置
    """
    if config is None:
        config = load_config()
    
    if profile_name is None:
        profile_name = config.get('active_profile', 'glm')
    
    profiles = config.get('profiles', {})
    
    if profile_name not in profiles:
        available = list(profiles.keys())
        raise ValueError(f"Unknown profile '{profile_name}'. Available: {available}")
    
    profile = profiles[profile_name]
    
    # 展开环境变量
    expanded_profile = _expand_env_vars(profile)
    
    # 添加 profile 名称到配置中
    expanded_profile['profile_name'] = profile_name
    
    return expanded_profile


def get_llm_client_config(
    profile_name: Optional[str] = None,
    config: Optional[Dict[str, Any]] = None,
    inventory: Optional[Dict[str, Any]] = None,
    key_alias: Optional[str] = None
) -> Dict[str, Any]:
    """
    获取适用于 LLMClient 初始化的配置。

    这是最常用的函数，直接返回创建 OpenAI client 所需的参数。

    Args:
        profile_name: Profile 名称，None 则使用默认

    Returns:
        包含 api_keys, base_url, model 等的字典
        注意：返回 api_keys 数组而不是单个 api_key，支持多 Key 切换
    """
    profile = get_profile(profile_name, config=config)

    # 验证必要字段
    required_fields = ['base_url', 'model']
    for field in required_fields:
        if not profile.get(field):
            raise ValueError(f"Profile '{profile.get('profile_name')}' missing required field: {field}")

    selected_alias = key_alias or os.environ.get('LLM_KEY_ALIAS')
    api_keys, key_aliases = _resolve_profile_keys(
        profile,
        inventory=inventory,
        key_alias=selected_alias
    )

    # 验证至少有一个有效的 key
    valid_keys = [k for k in api_keys if k and k.strip()]
    if not valid_keys:
        raise ValueError(f"Profile '{profile.get('profile_name')}' has no valid API keys")

    profile['api_keys'] = valid_keys
    profile['api_key_aliases'] = key_aliases

    # 保留 api_key 字段以保持向后兼容
    profile['api_key'] = valid_keys[0]
    if selected_alias:
        profile['selected_key_alias'] = selected_alias

    return profile


def set_active_profile(profile_name: str, config_path: Optional[Path] = None) -> None:
    """
    修改配置文件中的 active_profile。
    
    Args:
        profile_name: 要设置为激活的 profile 名称
        config_path: 可选，配置文件路径
    """
    path = config_path or CONFIG_FILE
    
    # 先验证 profile 存在
    config = load_config(path)
    profiles = config.get('profiles', {})
    if profile_name not in profiles:
        available = list(profiles.keys())
        raise ValueError(f"Unknown profile '{profile_name}'. Available: {available}")
    
    # 更新并写回
    config['active_profile'] = profile_name
    
    with open(path, 'w', encoding='utf-8') as f:
        json.dump(config, f, indent=4, ensure_ascii=False)
    
    print(f"Active profile set to: {profile_name}")


def list_profiles(config_path: Optional[Path] = None) -> Dict[str, str]:
    """
    列出所有可用的 profiles。
    
    Returns:
        Dict[profile_name, model_name]
    """
    config = load_config(config_path)
    profiles = config.get('profiles', {})
    active = config.get('active_profile', '')
    
    result = {}
    for name, profile in profiles.items():
        model = profile.get('model', 'unknown')
        marker = " (active)" if name == active else ""
        result[name] = f"{model}{marker}"
    
    return result


# 方便的全局访问
_cached_config: Optional[Dict] = None
_cached_profile: Optional[str] = None
_current_profile: Optional[Dict] = None


def get_current_profile() -> Dict[str, Any]:
    """
    获取当前激活的 profile 配置（带缓存）。
    """
    global _cached_config, _cached_profile, _current_profile
    
    config = load_config()
    active = config.get('active_profile', 'glm')
    
    if _cached_profile != active:
        _current_profile = get_profile(active, config)
        _cached_profile = active
    
    return _current_profile


if __name__ == "__main__":
    # 测试配置加载
    print("=== LLM Profiles ===")
    for name, model in list_profiles().items():
        print(f"  {name}: {model}")
    
    print("\n=== Current Profile ===")
    profile = get_current_profile()
    print(f"  Profile: {profile.get('profile_name')}")
    print(f"  Model: {profile.get('model')}")
    print(f"  Base URL: {profile.get('base_url')}")
    print(f"  API Key: {profile.get('api_key', '')[:10]}..." if profile.get('api_key') else "  API Key: (not set)")
