#!/usr/bin/env bash

set -o nounset

rm a.out temp.txt &> /dev/null

readonly GCC="gcc"
readonly CLANG="clang"


if ! "${CLANG}" -Weverything t.c >> temp.txt 2>&1 ; then
  exit 1
fi

if grep -q "Wimplicit-int" temp.txt || \
   grep -q "defaulting to type" temp.txt || \
   grep -q "Wmain-return-type" temp.txt || \
   grep -q "Wimplicit-function-declaration" temp.txt || \
   grep -q "Wincompatible-library-redeclaration" temp.txt || \
   grep -q "too few arguments" temp.txt ; then
  exit 1
fi

./a.out > temp.txt

if grep -q 'world' temp.txt ; then
  exit 0
fi

exit 1

