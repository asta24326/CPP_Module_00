#!/bin/bash

# Colors for output
GREEN="\033[0;32m"
RED="\033[0;31m"
RESET="\033[0m"

PASS=0
FAIL=0

# Helper function
check() {
    local description = $1
    local expected = $2
    local actual = $3

    if [ "$expected" = "$actual" ]; then
        printf "${GREEN}[PASS]${RESET} $description\n"
        PASS=$((PASS + 1))
    else
        printf "${RED}[FAIL]${RESET} $description\n"
        echo "  Expected: $expected"
        echo "  Actual:   $actual"
        FAIL=$((FAIL + 1))
    fi
}

# Test 1 — basic replacement
echo "Hello Bob and Bob" > test1.txt
./replace test1.txt Bob Alice
check "Basic replacement" "Hello Alice and Alice" "$(cat test1.txt.replace)"

# Test 2 — no match
echo "Hello World" > test2.txt
./replace test2.txt Bob Alice
check "No match" "Hello World" "$(cat test2.txt.replace)"

# Test 3 — replace with empty s2
echo "Hello Bob" > test3.txt
./replace test3.txt Bob ""
check "Replace with empty s2" "Hello " "$(cat test3.txt.replace)"

# Test 4 — multiple lines
printf "Bob\nAlice\nBob" > test4.txt
./replace test4.txt Bob Charlie
check "Multiple lines line1" "Charlie" "$(sed -n '1p' test4.txt.replace)"
check "Multiple lines line2" "Alice" "$(sed -n '2p' test4.txt.replace)"
check "Multiple lines line3" "Charlie" "$(sed -n '3p' test4.txt.replace)"

# Test 5 — empty s1 should fail
./replace test1.txt "" Alice 2>/dev/null
check "Empty s1 returns error" "1" "$?"

# Test 6 — wrong number of arguments
./replace 2>/dev/null
check "No arguments returns error" "1" "$?"

# Cleanup
rm -f test1.txt test1.txt.replace
rm -f test2.txt test2.txt.replace
rm -f test3.txt test3.txt.replace
rm -f test4.txt test4.txt.replace

# Summary
echo ""
printf "\nResults: ${GREEN}$PASS passed${RESET}, ${RED}$FAIL failed${RESET}\n"