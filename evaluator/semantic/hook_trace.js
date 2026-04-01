// hook_trace.js (Enhanced Version with Return Values & Deep Register Capture)

// ============================================================================
// 1. Global State & Helpers (Initialized FIRST)
// ============================================================================

// Global sequence ID
var seqId = 0;

// Thread-local call stack for sequence tracking (TID -> Array of seqIds)
var threadStacks = {};

function getThreadStack(tid) {
    if (!threadStacks[tid]) {
        threadStacks[tid] = [];
    }
    return threadStacks[tid];
}

function escapePrintContent(content) {
    return encodeURIComponent(content);
}

function escapePrintBytes(pointer, length) {
    try {
        if (!pointer || pointer.isNull() || length <= 0) {
            return null;
        }

        var byteArray = pointer.readByteArray(length);
        if (!byteArray) {
            return null;
        }

        var bytes = new Uint8Array(byteArray);
        var encoded = [];
        for (var i = 0; i < bytes.length; i++) {
            var hex = bytes[i].toString(16).toUpperCase();
            if (hex.length < 2) {
                hex = "0" + hex;
            }
            encoded.push("%" + hex);
        }
        return encoded.join("");
    } catch (e) {
        return null;
    }
}

function getCurrentTrackedSeq() {
    var tid = Process.getCurrentThreadId();
    var stack = getThreadStack(tid);
    if (stack.length === 0) {
        return null;
    }
    return stack[stack.length - 1];
}

function emitTracePrintEncoded(seq, encodedContent) {
    if (seq === null || seq === undefined || !encodedContent) {
        return;
    }
    send("TRACE_PRINT|" + seq + "|" + encodedContent);
}

function emitTracePrint(seq, content) {
    if (seq === null || seq === undefined || !content) {
        return;
    }

    var serialized = String(content);
    if (!serialized) {
        return;
    }

    emitTracePrintEncoded(seq, escapePrintContent(serialized));
}

function emitPrintForCurrentSeq(content) {
    emitTracePrint(getCurrentTrackedSeq(), content);
}

function safeReadUtf8String(address, length) {
    try {
        if (!address || address.isNull()) {
            return null;
        }
        if (length !== undefined && length !== null) {
            return address.readUtf8String(length);
        }
        return address.readUtf8String();
    } catch (e) {
        return null;
    }
}

function formatPrintfArg(specifier, lengthMod, value) {
    try {
        if (specifier === "s") {
            if (!value || value.isNull()) {
                return "(null)";
            }
            return safeReadUtf8String(value) || "(invalid)";
        }
        if (specifier === "c") {
            return String.fromCharCode(value.toInt32() & 0xff);
        }
        if (specifier === "p") {
            return value.toString();
        }
        if (specifier === "x") {
            return (value.toInt32() >>> 0).toString(16);
        }
        if (specifier === "X") {
            return (value.toInt32() >>> 0).toString(16).toUpperCase();
        }
        if (specifier === "u" || specifier === "o") {
            var unsignedValue = value.toInt32() >>> 0;
            return specifier === "o" ? unsignedValue.toString(8) : unsignedValue.toString(10);
        }
        if ("di".indexOf(specifier) !== -1 || lengthMod === "l" || lengthMod === "ll") {
            return value.toInt32().toString();
        }
        if ("fFeEgGaA".indexOf(specifier) !== -1) {
            return "<FLOAT>";
        }
    } catch (e) {
        return "<ERR>";
    }

    return "<UNSUPPORTED:" + specifier + ">";
}

function renderPrintfLike(formatPtr, args, firstArgIndex) {
    var formatStr = safeReadUtf8String(formatPtr);
    if (!formatStr) {
        return null;
    }

    var out = "";
    var argIndex = firstArgIndex;

    for (var i = 0; i < formatStr.length; i++) {
        var ch = formatStr.charAt(i);
        if (ch !== "%") {
            out += ch;
            continue;
        }

        if (i + 1 < formatStr.length && formatStr.charAt(i + 1) === "%") {
            out += "%";
            i += 1;
            continue;
        }

        var j = i + 1;

        while (j < formatStr.length && "-+ #0'".indexOf(formatStr.charAt(j)) !== -1) {
            j += 1;
        }

        if (j < formatStr.length && formatStr.charAt(j) === "*") {
            argIndex += 1;
            j += 1;
        } else {
            while (j < formatStr.length && /[0-9]/.test(formatStr.charAt(j))) {
                j += 1;
            }
        }

        if (j < formatStr.length && formatStr.charAt(j) === ".") {
            j += 1;
            if (j < formatStr.length && formatStr.charAt(j) === "*") {
                argIndex += 1;
                j += 1;
            } else {
                while (j < formatStr.length && /[0-9]/.test(formatStr.charAt(j))) {
                    j += 1;
                }
            }
        }

        var lengthMod = "";
        if (j + 1 < formatStr.length && formatStr.substr(j, 2) === "ll") {
            lengthMod = "ll";
            j += 2;
        } else if (j < formatStr.length && "hljztL".indexOf(formatStr.charAt(j)) !== -1) {
            lengthMod = formatStr.charAt(j);
            j += 1;
        }

        if (j >= formatStr.length) {
            out += formatStr.substr(i);
            break;
        }

        var specifier = formatStr.charAt(j);
        var argValue = args[argIndex];
        argIndex += 1;

        out += formatPrintfArg(specifier, lengthMod, argValue);
        i = j;
    }

    return out;
}

function hookPrintfLike(symbolName, formatArgIndex, firstValueArgIndex) {
    try {
        var targetPtr = tryGetExport(null, symbolName);
        if (!targetPtr) {
            var libcModule = findLibcModule();
            if (libcModule) {
                targetPtr = tryGetExport(libcModule.name, symbolName);
            }
        }
        if (!targetPtr) {
            return false;
        }

        Interceptor.attach(targetPtr, {
            onEnter: function (args) {
                var content = renderPrintfLike(args[formatArgIndex], args, firstValueArgIndex);
                if (content) {
                    emitPrintForCurrentSeq(content);
                }
            }
        });
        console.log("[*] Hooked " + symbolName + " for TRACE_PRINT.");
        return true;
    } catch (e) {
        console.log("[!] Failed to hook " + symbolName + ": " + e.message);
        return false;
    }
}

function hookStringEmitter(symbolName, stringArgIndex, appendNewline) {
    try {
        var targetPtr = tryGetExport(null, symbolName);
        if (!targetPtr) {
            var libcModule = findLibcModule();
            if (libcModule) {
                targetPtr = tryGetExport(libcModule.name, symbolName);
            }
        }
        if (!targetPtr) {
            return false;
        }

        Interceptor.attach(targetPtr, {
            onEnter: function (args) {
                var content = safeReadUtf8String(args[stringArgIndex]);
                if (!content) {
                    return;
                }
                if (appendNewline) {
                    content += "\n";
                }
                emitPrintForCurrentSeq(content);
            }
        });
        console.log("[*] Hooked " + symbolName + " for TRACE_PRINT.");
        return true;
    } catch (e) {
        console.log("[!] Failed to hook " + symbolName + ": " + e.message);
        return false;
    }
}

function hookStdoutEmitters() {
    var hooked = 0;
    if (hookPrintfLike("printf", 0, 1)) hooked += 1;
    if (hookPrintfLike("__printf_chk", 1, 2)) hooked += 1;
    if (hookStringEmitter("puts", 0, true)) hooked += 1;
    console.log("[*] TRACE_PRINT fallback hooks enabled: " + hooked);
    return hooked;
}

function tryGetExport(moduleName, exportName) {
    var addr = null;

    try {
        if (typeof Module.findExportByName === "function") {
            addr = Module.findExportByName(moduleName, exportName);
            if (addr) return addr;
        }
    } catch (e) {}

    try {
        if (typeof Module.getExportByName === "function") {
            return Module.getExportByName(moduleName, exportName);
        }
    } catch (e) {}

    try {
        if (moduleName === null && typeof Module.findGlobalExportByName === "function") {
            addr = Module.findGlobalExportByName(exportName);
            if (addr) return addr;
        }
    } catch (e) {}

    try {
        if (moduleName === null && typeof Module.getGlobalExportByName === "function") {
            return Module.getGlobalExportByName(exportName);
        }
    } catch (e) {}

    try {
        if (moduleName !== null && typeof Process.getModuleByName === "function") {
            var mod = Process.getModuleByName(moduleName);
            if (mod) {
                if (typeof mod.findExportByName === "function") {
                    addr = mod.findExportByName(exportName);
                    if (addr) return addr;
                }
                if (typeof mod.getExportByName === "function") {
                    return mod.getExportByName(exportName);
                }
            }
        }
    } catch (e) {}

    return null;
}

function findLibcModule() {
    var modules = Process.enumerateModules();
    for (var i = 0; i < modules.length; i++) {
        var name = modules[i].name || "";
        if (name.indexOf("libc.so") !== -1 || name === "libc.so.6" || name === "libSystem.B.dylib") {
            return modules[i];
        }
    }
    return null;
}

function configureStdoutBuffering() {
    try {
        var stdoutSym = tryGetExport(null, "stdout");
        var setvbufPtr = tryGetExport(null, "setvbuf");
        if (stdoutSym && setvbufPtr) {
            var stdoutFile = stdoutSym.readPointer();
            var setvbuf = new NativeFunction(setvbufPtr, "int", ["pointer", "pointer", "int", "ulong"]);
            var rc = setvbuf(stdoutFile, ptr(0), 2, 0); // _IONBF = 2
            console.log("[*] setvbuf(stdout, _IONBF) rc=" + rc);
            return;
        }

        var setbufPtr = tryGetExport(null, "setbuf");
        if (stdoutSym && setbufPtr) {
            var stdoutFile2 = stdoutSym.readPointer();
            var setbuf = new NativeFunction(setbufPtr, "void", ["pointer", "pointer"]);
            setbuf(stdoutFile2, ptr(0));
            console.log("[*] setbuf(stdout, NULL) applied.");
            return;
        }

        console.log("[!] Could not configure stdout buffering.");
    } catch (e) {
        console.log("[!] Failed to configure stdout buffering: " + e.message);
    }
}

/**
 * Get argument values based on architecture
 */
function getArgString(args) {
    try {
        return "Arg0=" + args[0].toInt32() +
            ",Arg1=" + args[1].toInt32() +
            ",Arg2=" + args[2].toInt32() +
            ",Arg3=" + args[3].toInt32();
    } catch (e) {
        return "Args=(error)";
    }
}

/**
 * Main Hook Function
 */
function hookFunction(addr, name) {
    try {
        Interceptor.attach(addr, {
            onEnter: function (args) {
                var tid = Process.getCurrentThreadId();
                var stack = getThreadStack(tid);
                var currentDepth = stack.length;
                var currentSeq = seqId++;

                // Push to thread-local stack
                stack.push(currentSeq);

                this.mySeq = currentSeq;
                this.myDepth = currentDepth;

                var context = this.context;
                // TRACE_ENT|SEQ|NAME|DEPTH|ARGS|REGS
                var logMsg = "TRACE_ENT|" + currentSeq + "|" + name + "|" + currentDepth + "|" + getArgString(args);

                // Capture registers
                var regs = "";
                if (Process.arch === 'x64') {
                    regs = "rax=" + context.rax + ",rbx=" + context.rbx +
                        ",rcx=" + context.rcx + ",rdx=" + context.rdx +
                        ",rsi=" + context.rsi + ",rdi=" + context.rdi +
                        ",r8=" + context.r8 + ",r9=" + context.r9;
                } else if (Process.arch === 'arm64') {
                    regs = "x0=" + context.x0 + ",x1=" + context.x1 +
                        ",x2=" + context.x2 + ",x3=" + context.x3 +
                        ",x4=" + context.x4 + ",x5=" + context.x5 +
                        ",x6=" + context.x6 + ",x7=" + context.x7;
                } else if (Process.arch === 'arm') {
                    // ARM32 uses r0-r7 registers
                    regs = "r0=" + context.r0 + ",r1=" + context.r1 +
                        ",r2=" + context.r2 + ",r3=" + context.r3 +
                        ",r4=" + context.r4 + ",r5=" + context.r5 +
                        ",r6=" + context.r6 + ",r7=" + context.r7;
                } else if (Process.arch === 'ia32') {
                    regs = "eax=" + context.eax + ",ebx=" + context.ebx +
                        ",ecx=" + context.ecx + ",edx=" + context.edx +
                        ",esi=" + context.esi + ",edi=" + context.edi;
                }

                if (regs) logMsg += "|" + regs;
                send(logMsg);
            },
            onLeave: function (retval) {
                var mySeq = this.mySeq;

                // Pop from thread-local stack
                var tid = Process.getCurrentThreadId();
                var stack = getThreadStack(tid);
                if (stack.length > 0 && stack[stack.length - 1] === mySeq) {
                    stack.pop();
                } else {
                    var idx = stack.lastIndexOf(mySeq);
                    if (idx !== -1) {
                        stack.splice(idx, 1);
                    }
                }

                var myDepth = this.myDepth;
                if (myDepth === undefined) myDepth = stack.length;

                // TRACE_EXT|SEQ|NAME|DEPTH|RETVAL
                var retStr = retval.toInt32();
                var logMsg = "TRACE_EXT|" + mySeq + "|" + name + "|" + myDepth + "|" + retStr;
                send(logMsg);
            }
        });
    } catch (e) {
        console.log("[!] Failed to hook " + name + ": " + e.message);
    }
}

/**
 * Load configuration from JSON file
 */
function loadConfig() {
    var config = {
        target_funcs: {},
        symbol_map: {},
        src_name: "1",
        src_names: []
    };

    try {
        var configPath = (typeof BINBENCH_TRACE_CONFIG_PATH !== "undefined" && BINBENCH_TRACE_CONFIG_PATH)
            ? BINBENCH_TRACE_CONFIG_PATH
            : "/tmp/binbench_config.json";
        var configContent = File.readAllText(configPath);
        var rawConfig = JSON.parse(configContent);

        config.src_name = rawConfig.src_name || "1";
        config.src_names = rawConfig.src_names || [config.src_name];
        config.symbol_map = rawConfig.symbol_map || {};

        var jsonPath = rawConfig.functions_json_path || "/work/evaluator/semantic/target_functions.json";

        console.log("[*] JS Config: src=" + config.src_name + ", src_names=" + config.src_names.join(",") + ", json=" + jsonPath);
        console.log("[*] Manual Symbol Map: " + Object.keys(config.symbol_map).length + " entries");

        var content = File.readAllText(jsonPath);
        var allFuncs = JSON.parse(content);

        config.src_names.forEach(function (srcName) {
            if (!allFuncs[srcName]) {
                return;
            }
            console.log("[*] Loading " + allFuncs[srcName].length + " functions from " + srcName);
            allFuncs[srcName].forEach(function (f) {
                config.target_funcs[f] = true;
            });
        });
    } catch (e) {
        console.log("[!] Error loading config: " + e.message);
    }
    return config;
}

// ============================================================================
// 2. Main Logic
// ============================================================================

// 1. Load configuration
var config = loadConfig();
var target_funcs = config.target_funcs;
var symbol_map = config.symbol_map;

// 2. Discover Module Base
console.log("[*] Searching for functions...");
var mainModule = Process.enumerateModules()[0];
if (Process.mainModule) {
    mainModule = Process.mainModule;
}
console.log("[*] Main module: " + mainModule.name + " (" + mainModule.base + ")");
var moduleBase = mainModule.base;

var foundCount = 0;
var hookedFuncs = {};

// 3. Try finding functions via Manual Symbol Map (Highest Priority)
console.log("[*] Strategy 1: Using Manual Symbol Map from nm...");
for (var funcName in target_funcs) {
    if (target_funcs[funcName] === true) {
        var offset = symbol_map[funcName];
        if (offset === undefined) offset = symbol_map["_" + funcName];

        if (offset !== undefined) {
            var addr = ptr(offset);
            if (addr.compare(moduleBase) < 0) {
                addr = moduleBase.add(offset);
            }
            console.log("[+] Resolved via nm map: " + funcName + " -> " + addr);
            hookFunction(addr, funcName);
            hookedFuncs[funcName] = true;
            foundCount++;
        }
    }
}

// 4. Fallback Strategies
if (foundCount < Object.keys(target_funcs).length) {
    console.log("[*] Strategy 2: Frida Enumeration & DebugSymbol lookup for remaining...");

    var symbols = mainModule.enumerateSymbols();
    symbols.forEach(function (symbol) {
        var name = symbol.name;
        var cleanName = name.startsWith("_") ? name.substring(1) : name;

        if ((target_funcs[name] || target_funcs[cleanName]) && !hookedFuncs[name] && !hookedFuncs[cleanName]) {
            var targetName = target_funcs[name] ? name : cleanName;
            hookFunction(symbol.address, targetName);
            hookedFuncs[targetName] = true;
            foundCount++;
        }
    });
}

console.log("[*] Hook complete. Hooked " + foundCount + " functions.");

// 5. Stdout Capture (Optional - Executed LAST)
configureStdoutBuffering();
try {
    var writePtr = tryGetExport(null, "write");
    if (!writePtr) writePtr = tryGetExport(null, "__write");
    if (!writePtr) writePtr = tryGetExport(null, "__libc_write");
    if (!writePtr) {
        var libcModule = findLibcModule();
        if (libcModule) {
            writePtr = tryGetExport(libcModule.name, "write") ||
                tryGetExport(libcModule.name, "__write") ||
                tryGetExport(libcModule.name, "__libc_write");
        }
    }

    if (writePtr) {
        console.log("[*] Resolved write export at " + writePtr);
        Interceptor.attach(writePtr, {
            onEnter: function (args) {
                var fd = args[0].toInt32();
                if (fd === 1) { // stdout only
                    try {
                        var tid = Process.getCurrentThreadId();
                        var stack = getThreadStack(tid);
                        // Only log if we are inside a tracked function
                        if (stack.length > 0) {
                            var currentSeq = stack[stack.length - 1];
                            var buf = args[1];
                            var len = args[2].toInt32();
                            if (len > 0) {
                                var encoded = escapePrintBytes(buf, len);
                                if (encoded) {
                                    emitTracePrintEncoded(currentSeq, encoded);
                                }
                            }
                        }
                    } catch (e) {
                        // Ignore read errors
                    }
                }
            }
        });
        console.log("[*] Stdout capture enabled (hooked write).");
    } else {
        console.log("[!] Could not find 'write' export. Falling back to libc-level stdout hooks.");
        if (hookStdoutEmitters() === 0) {
            console.log("[!] Stdout capture disabled.");
        }
    }
} catch (e) {
    console.log("[!] Error hooking write: " + e.message + ". Falling back to libc-level stdout hooks.");
    if (hookStdoutEmitters() === 0) {
        console.log("[!] Stdout capture disabled.");
    }
}
