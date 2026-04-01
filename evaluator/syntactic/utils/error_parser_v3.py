import re
from collections import defaultdict

class ErrorParser:
    """
    v3: Enhanced with Error Aggregation.
    Group similar error messages to reduce LLM cognitive load and highlight multi-site issues.
    """
    def __init__(self):
        # Matches common compiler diagnostics:
        #   file.c:10:5: error: message
        #   file.c:10: error: message
        #   /tmp/foo.s:2110: Error: message
        self.error_pattern = re.compile(
            r"(.+?):(\d+)(?::(\d+))?:\s*(fatal error|error|warning|note):\s*(.*)",
            re.IGNORECASE,
        )
        # Matches compiler-driver diagnostics without source locations:
        #   cc1plus: error: ...main must return int
        #   g++: fatal error: ...
        self.driver_error_pattern = re.compile(
            r"([^:\s][^:]*?):\s*(fatal error|error|warning|note):\s*(.*)",
            re.IGNORECASE,
        )
        # Matches bare compiler diagnostics without file / driver prefix:
        #   error: Undefined temporary symbol
        #   warning: something...
        self.bare_severity_pattern = re.compile(
            r"(fatal error|error|warning|note):\s*(.*)",
            re.IGNORECASE,
        )

    def categorize_error(self, message):
        """
        Categorizes error messages into high-level types.
        v3.2: Extended matching patterns for GCC/Clang to reduce "Other" category.
        """
        msg = message.lower()

        # 1. Undeclared Identifier（扩展匹配）
        if "undeclared identifier" in msg:
            return "Undeclared Identifier"
        if "' undeclared" in msg:  # GCC: 'xxx' undeclared (covers both function and global scope)
            return "Undeclared Identifier"
        if "undeclared (" in msg:  # GCC: undeclared (first use in this function)
            return "Undeclared Identifier"
        if "undeclared here" in msg:  # GCC: 'xxx' undeclared here (not in a function)
            return "Undeclared Identifier"

        # 2. Implicit Function Declaration
        if "implicit declaration of function" in msg:
            return "Implicit Function Declaration"
        if "call to undeclared function" in msg:
            return "Implicit Function Declaration"
        if "call to undeclared library function" in msg:
            return "Implicit Function Declaration"
        if "implicit declaration" in msg and "function" in msg:
            return "Implicit Function Declaration"

        # 3. Missing Header
        if "file not found" in msg and "fatal error" in msg:
            return "Missing Header"
        if "' file not found" in msg:  # 'xxx.h' file not found
            return "Missing Header"
        if "no such file or directory" in msg:
            return "Missing Header"

        # 4. Unknown Type（扩展匹配）
        if "unknown type name" in msg:
            return "Unknown Type"
        if "unknown type" in msg:
            return "Unknown Type"

        # 5. Missing Type Specifier
        if "type specifier missing" in msg:
            return "Missing Type Specifier"
        if "requires a type specifier" in msg:
            return "Missing Type Specifier"
        if "declaration specifier missing" in msg:
            return "Missing Type Specifier"

        # ... (rest of categories are identical to v2)
        if "conflicting types" in msg or "conflicting type" in msg:
            return "Conflicting Types"
        if "redefinition of" in msg or "redefinition" in msg:
            return "Redefinition"
        if "unterminated" in msg or "conditional directive" in msg:
            return "Syntax Error"
        if "expected" in msg or "parse error" in msg or "syntax error" in msg:
            return "Syntax Error"
        if "selected processor does not support" in msg or "no such instruction" in msg:
            return "Assembler Error"
        if "undefined temporary symbol" in msg:
            return "Assembler Error"
        if "unused variable" in msg: return "Unused Variable"
        if "unused function" in msg: return "Unused Function"
        if "incompatible pointer type" in msg or "incompatible type" in msg or "from incompatible pointer" in msg:
            return "Incompatible Pointer Type"
        if "invalid use of array" in msg or "unspecified bounds" in msg or "flexible array member" in msg:
            return "Invalid Array Use"
        if "too many arguments" in msg or "too few arguments" in msg:
            return "Argument Count Mismatch"
        if "cannot be defined via" in msg: return "Typedef Error"
        if "storage class" in msg: return "Storage Class Error"
        if "incomplete type" in msg or "incomplete definition of type" in msg: return "Incomplete Type"
        if "void value not ignored" in msg or ("dereferencing" in msg and "void" in msg) or "invalid use of void expression" in msg:
            return "Void Value Error"
        if "not a structure or union" in msg or "has no member named" in msg or "request for member" in msg or "duplicate member" in msg:
            return "Member Access Error"
        if "makes pointer from integer" in msg or "makes integer from pointer" in msg or "-wint-conversion" in msg or "conversion to non-scalar type" in msg or "cannot convert to a pointer type" in msg:
            return "Type Conversion Warning"
        if "invalid operands to binary" in msg: return "Invalid Operands"
        if ("type defaults to" in msg and "implicit-int" in msg) or "[-wimplicit-int]" in msg: return "Implicit Int"
        if "duplicate label" in msg: return "Duplicate Label"
        if "return-mismatch" in msg or "with no value, in function returning non-void" in msg or "with a value, in function returning void" in msg:
            return "Return Mismatch"
        if "declared as function returning an array" in msg: return "Invalid Declaration"
        if "main" in msg and "must return" in msg and "int" in msg:
            return "Invalid Main Signature"

        return "Other"

    def _extract_core_message(self, message):
        """
        Strips highly specific line/column/function references from a message
        to allow grouping. E.g. "unknown type name 'uint32_t'" -> "unknown type name 'uint32_t'"
        """
        # A simple normalization.
        # e.g. "use of undeclared identifier 'x'" -> "use of undeclared identifier 'x'"
        return message.strip()

    def parse(self, stderr):
        errors = []
        fatal_errors = []
        stats = defaultdict(int)
        
        lines = stderr.split('\n')
        seen_errors = set()

        for line in lines:
            raw_line = line.strip()
            match = self.error_pattern.match(raw_line)
            if match:
                file_path, line_no, col_no, severity, message = match.groups()
                line_no = int(line_no)
                col_no = int(col_no or 0)
            else:
                driver_match = self.driver_error_pattern.match(raw_line)
                if driver_match:
                    file_path, severity, message = driver_match.groups()
                    line_no = 0
                    col_no = 0
                else:
                    bare_match = self.bare_severity_pattern.match(raw_line)
                    if not bare_match:
                        continue
                    severity, message = bare_match.groups()
                    file_path = "<compiler>"
                    line_no = 0
                    col_no = 0

            severity = severity.lower()
            error_key = (file_path, line_no, message)

            if error_key in seen_errors:
                continue
            seen_errors.add(error_key)

            category = self.categorize_error(message)
            if "fatal error" in severity or "fatal error" in message.lower():
                category = "Missing Header"

            error_obj = {
                "file": file_path,
                "line": line_no,
                "col": col_no,
                "severity": severity,
                "message": message.strip(),
                "category": category,
                "raw": raw_line,
            }

            if "fatal error" in severity or "fatal error" in message.lower():
                fatal_errors.append(error_obj)
                stats[category] += 1
            elif "error" in severity:
                errors.append(error_obj)
                stats[category] += 1

        if fatal_errors:
            fatal_stats = defaultdict(int)
            for e in fatal_errors:
                fatal_stats[e["category"]] += 1
            return fatal_errors, dict(fatal_stats)

        return errors, dict(stats)

    def group_errors(self, errors):
        """
        Groups identical/similar errors across multiple lines.
        Returns a list of grouped error dicts.
        """
        groups = defaultdict(list)
        
        for err in errors:
            core_msg = self._extract_core_message(err['message'])
            cat = err['category']
            # Group by category AND core message
            key = f"{cat}:::{core_msg}"
            groups[key].append(err)
            
        grouped_results = []
        for key, err_list in groups.items():
            cat, msg = key.split(":::", 1)
            lines = sorted(list(set([e['line'] for e in err_list if e['line'] > 0])))
            grouped_results.append({
                "category": cat,
                "message": msg,
                "count": len(err_list),
                "lines": lines,
                "sample_error": err_list[0]
            })
            
        # Sort so that highest count / critical ones come first
        def sort_key(g):
            # Prioritize missing headers and types
            cat_priority = 0
            if g["category"] == "Missing Header": cat_priority = 100
            elif g["category"] == "Unknown Type": cat_priority = 90
            elif g["category"] in ["Implicit Function Declaration", "Undeclared Identifier"]: cat_priority = 80
            return (cat_priority, g["count"])
            
        grouped_results.sort(key=sort_key, reverse=True)
        return grouped_results
