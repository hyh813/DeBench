import os
import re

class FileManager:
    """
    v4: File manager optimized for Block-based Search-and-Replace patches (Aider/Claude style).
    - `get_full_context()` retained for global visibility.
    - `edit_code_block()` replaces volatile line-number based patching.
    - `replace_string()` retained for global literal replacements.
    """

    def __init__(self):
        pass

    def read_file(self, path):
        with open(path, 'r', encoding='utf-8', errors='ignore') as f:
            return f.read()

    def get_full_context(self, path):
        """
        Returns (total_lines, full_code, start_line=1)
        Provides the ENTIRE file content as code context for the LLM.
        """
        if not os.path.exists(path):
            return 0, "File not found", 0

        with open(path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()

        total_lines = content.count('\n') + (1 if content and not content.endswith('\n') else 0)
        return total_lines, content, 1

    def _normalize_whitespace(self, text):
        """Normalize line endings and consecutive whitespaces for flexible matching."""
        # Convert all whitespace runs to single space, except newlines. But actually,
        # for robust matching, we often just want exact lines but stripped.
        lines = [line.strip() for line in text.strip().splitlines() if line.strip()]
        return '\n'.join(lines)

    def edit_code_block(self, path, search_block, replace_block):
        """
        Search for `search_block` in the file and replace it with `replace_block`.
        Returns (success: bool, msg: str)
        
        This robust approach tries:
        1. Exact substring match.
        2. If not found, tries line-by-line whitespace-agnostic matching.
        """
        if not os.path.exists(path):
            return False, "File not found"

        with open(path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
            
        if not search_block:
            return False, "Search block cannot be empty"

        # 1. Exact match attempt
        # Replace Windows line endings if any, standardizing
        c_exact = content.replace('\r\n', '\n')
        s_exact = search_block.replace('\r\n', '\n')
        r_exact = replace_block.replace('\r\n', '\n')
        
        count = c_exact.count(s_exact)
        
        if count == 1:
            new_content = c_exact.replace(s_exact, r_exact, 1)
            with open(path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            return True, "Code block uniquely matched and replaced."
        elif count > 1:
            return False, f"Patch failed: The search_block matched {count} times. Please provide more context in search_block to make it unique."
            
        # 2. Try Flexible / Whitespace-agnostic match
        # Split into stripped non-empty lines for content and track original indices
        content_lines_raw = c_exact.split('\n')
        normalized_content_lines = [(i, line.strip()) for i, line in enumerate(content_lines_raw) if line.strip()]
        
        # Ignore empty lines in search block
        search_lines = [line.strip() for line in s_exact.split('\n') if line.strip()]
        
        if not search_lines:
            return False, "Search block only contains whitespace."

        matched_line_ranges = []
        for i in range(len(normalized_content_lines) - len(search_lines) + 1):
            match = True
            for j, s_line in enumerate(search_lines):
                if normalized_content_lines[i+j][1] != s_line:
                    match = False
                    break
            if match:
                matched_line_ranges.append((normalized_content_lines[i][0], normalized_content_lines[i+len(search_lines)-1][0]))
        
        if len(matched_line_ranges) == 1:
            # We found exactly one fuzzy match block in the file lines.
            span_start = matched_line_ranges[0][0]
            span_end = matched_line_ranges[0][1] + 1 # exclusive
            
            # Replace lines in that span
            new_lines = content_lines_raw[:span_start] + r_exact.split('\n') + content_lines_raw[span_end:]
            new_content = '\n'.join(new_lines)
            
            with open(path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            return True, f"Code block matched (ignoring whitespace/blank lines) and replaced near line {span_start + 1}."
            
        elif len(matched_line_ranges) > 1:
            return False, f"Patch failed: The search_block fuzzy-matched {len(matched_line_ranges)} times. Provide more context."
        
        # 3. Completely failed
        # Suggestion generation for the agent
        return False, (
            "Patch failed: The search_block was not found in the file. "
            "Please ensure you copy the OLD code EXACTLY as it appears in the file context, "
            "including surrounding lines if necessary for uniqueness."
        )

    def replace_string(self, path, old_str, new_str, replace_all=False):
        """
        Replace occurrences of old_str with new_str in the file.
        """
        if not os.path.exists(path):
            return False, "File not found"

        with open(path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
        
        if old_str not in content:
            return False, "String not found in file"
        
        total_count = content.count(old_str)

        if replace_all:
            new_content = content.replace(old_str, new_str)
            with open(path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            return True, f"Replaced all {total_count} occurrences"
        else:
            new_content = content.replace(old_str, new_str, 1)
            with open(path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            if total_count > 1:
                return True, f"Replaced 1st occurrence ({total_count} total found; use replace_all=true to replace all at once)"
            return True, "String replaced"
