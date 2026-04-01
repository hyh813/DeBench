"""
LLM Configuration Loader

Centralized loading and management of LLM configuration, including:
1. Reading configuration from JSON files
2. Environment-variable expansion using `${VAR_NAME}`
3. Command-line overrides
4. Multi-profile switching
"""

import os
import re
import json
from pathlib import Path
from typing import Dict, Any, Optional, List, Tuple

# Configuration file paths (relative to the project root)
CONFIG_DIR = Path(__file__).parent
CONFIG_FILE = CONFIG_DIR / "llm_config.json"
KEY_INVENTORY_FILE = CONFIG_DIR / "llm_key_inventory.json"


def _expand_env_vars(value: Any) -> Any:
    """
    Recursively expand environment variables inside configuration values.
    Supports `${VAR_NAME}` syntax.
    """
    if isinstance(value, str):
        # Match `${VAR_NAME}` placeholders
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
    Load the main LLM configuration file.
    
    Args:
        config_path: optional explicit config file path
        
    Returns:
        full configuration dictionary
    """
    path = config_path or CONFIG_FILE
    
    if not path.exists():
        raise FileNotFoundError(f"LLM config file not found: {path}")
    
    with open(path, 'r', encoding='utf-8') as f:
        config = json.load(f)
    
    return config


def load_key_inventory(inventory_path: Optional[Path] = None) -> Dict[str, Any]:
    """
    Load the LLM key inventory.

    Args:
        inventory_path: optional explicit inventory file path

    Returns:
        inventory dictionary
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
    List key records from the inventory.

    Args:
        provider: optional provider filter
        inventory: optional preloaded inventory dictionary

    Returns:
        list of key records including fields such as alias / provider / api_key / label
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
    Resolve a single key alias.
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
    Get the currently selectable keys for a profile, ordered by `preferred_key_aliases`.
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
    Resolve the final usable key list from the profile, inventory, and optional explicit alias.
    """
    provider = profile.get('key_provider')

    # 1. Exact alias binding: pin the process to a single key
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

    # 2. Provider-driven resolution: collect compatible keys and order them by preferred aliases
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

    # 3. Backward compatibility: still support inline api_key / api_keys in the profile
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
    Get a profile configuration and expand its environment variables.
    
    Args:
        profile_name: profile name such as `glm_official` or `qwen3.5-plus`
                      if `None`, use the config file's `active_profile`
        config: optional preloaded config dictionary
        
    Returns:
        profile configuration with environment variables expanded
    """
    if config is None:
        config = load_config()
    
    if profile_name is None:
        profile_name = config.get('active_profile', 'glm_official')
    
    profiles = config.get('profiles', {})
    
    if profile_name not in profiles:
        available = list(profiles.keys())
        raise ValueError(f"Unknown profile '{profile_name}'. Available: {available}")
    
    profile = profiles[profile_name]
    
    # Expand environment variables
    expanded_profile = _expand_env_vars(profile)
    
    # Inject the profile name into the resolved configuration
    expanded_profile['profile_name'] = profile_name
    
    return expanded_profile


def get_llm_client_config(
    profile_name: Optional[str] = None,
    config: Optional[Dict[str, Any]] = None,
    inventory: Optional[Dict[str, Any]] = None,
    key_alias: Optional[str] = None
) -> Dict[str, Any]:
    """
    Get the configuration needed to initialize `LLMClient`.

    This is the most common helper and returns the parameters needed to create the OpenAI-compatible client.

    Args:
        profile_name: profile name, or `None` to use the default

    Returns:
        dictionary containing `api_keys`, `base_url`, `model`, and related fields
        note: returns an `api_keys` array instead of a single `api_key` so key rotation is supported
    """
    profile = get_profile(profile_name, config=config)

    # Validate required fields
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

    # Ensure at least one usable key is available
    valid_keys = [k for k in api_keys if k and k.strip()]
    if not valid_keys:
        raise ValueError(f"Profile '{profile.get('profile_name')}' has no valid API keys")

    profile['api_keys'] = valid_keys
    profile['api_key_aliases'] = key_aliases

    # Keep `api_key` for backward compatibility
    profile['api_key'] = valid_keys[0]
    if selected_alias:
        profile['selected_key_alias'] = selected_alias

    return profile


def set_active_profile(profile_name: str, config_path: Optional[Path] = None) -> None:
    """
    Update `active_profile` in the configuration file.
    
    Args:
        profile_name: profile name to activate
        config_path: optional config file path
    """
    path = config_path or CONFIG_FILE
    
    # Validate that the target profile exists first
    config = load_config(path)
    profiles = config.get('profiles', {})
    if profile_name not in profiles:
        available = list(profiles.keys())
        raise ValueError(f"Unknown profile '{profile_name}'. Available: {available}")
    
    # Update and write back
    config['active_profile'] = profile_name
    
    with open(path, 'w', encoding='utf-8') as f:
        json.dump(config, f, indent=4, ensure_ascii=False)
    
    print(f"Active profile set to: {profile_name}")


def list_profiles(config_path: Optional[Path] = None) -> Dict[str, str]:
    """
    List all available profiles.
    
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


# Convenience globals
_cached_config: Optional[Dict] = None
_cached_profile: Optional[str] = None
_current_profile: Optional[Dict] = None


def get_current_profile() -> Dict[str, Any]:
    """
    Get the currently active profile configuration with caching.
    """
    global _cached_config, _cached_profile, _current_profile
    
    config = load_config()
    active = config.get('active_profile', 'glm_official')
    
    if _cached_profile != active:
        _current_profile = get_profile(active, config)
        _cached_profile = active
    
    return _current_profile


if __name__ == "__main__":
    # Manual configuration smoke check
    print("=== LLM Profiles ===")
    for name, model in list_profiles().items():
        print(f"  {name}: {model}")
    
    print("\n=== Current Profile ===")
    profile = get_current_profile()
    print(f"  Profile: {profile.get('profile_name')}")
    print(f"  Model: {profile.get('model')}")
    print(f"  Base URL: {profile.get('base_url')}")
    print(f"  API Key: {profile.get('api_key', '')[:10]}..." if profile.get('api_key') else "  API Key: (not set)")
