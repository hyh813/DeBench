#!/usr/bin/env bash
set -euo pipefail

SSH_BIN="/usr/bin/ssh"

filtered=()
while (($#)); do
  case "$1" in
    -o)
      if (($# < 2)); then
        break
      fi
      case "$2" in
        ControlMaster=*|ControlPath=*|ControlPersist=*)
          shift 2
          continue
          ;;
      esac
      filtered+=("$1" "$2")
      shift 2
      ;;
    -S)
      if (($# >= 2)); then
        shift 2
      else
        shift
      fi
      ;;
    *)
      filtered+=("$1")
      shift
      ;;
  esac
done

exec "$SSH_BIN" \
  -o ControlMaster=no \
  -o ControlPath=none \
  -o ControlPersist=no \
  "${filtered[@]}"
