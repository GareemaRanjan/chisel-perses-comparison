#!/usr/bin/env bash


set -o nounset
set -o pipefail

rm a.out temp.txt &> /dev/null

readonly GCC="gcc"
readonly CLANG="clang"


rm -f out*.txt


clang reverse.c -o out1
./out1 hi > temp1.txt

readonly EXIT_CODE="$?"
echo $EXIT_CODE
# cat temp1.txt
if [[ "${EXIT_CODE}" == "0" ]] && grep -q "ih" temp1.txt; then
  exit 0
  echo "will I be printed"
fi


exit 1

