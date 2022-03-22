#!/usr/bin/env python3

import re

case_match = re.compile(r"case SINGLE_TAP: register_code16\(([\w]+)\); break;\s*case SINGLE_HOLD: register_code16\(([\w]+)\); break;", re.MULTILINE)

with open("keymap.c", 'r', encoding="utf-8-sig") as f:
    keyfile = f.read()

#print(re.findall(case_match, keyfile))

pairs = re.findall(case_match, keyfile)

print('#include "symshift.h"')
print("symshift_pair symshifts[] = {")
print(",\n".join([f"\tSYMSHIFT({pair[0]}, {pair[1]})" for pair in pairs]))
print("};\n")

print("qk_tap_dance_action_t tap_dance_actions[] = {")
print(",\n".join([f"\tSYMSHIFT_FN({i})" for i, p in enumerate(pairs)]))
print("};\n")

