#!/usr/bin/env bash


set -o nounset
set -o pipefail

rm a.out temp.txt &> /dev/null

readonly GCC="gcc"
readonly CLANG="clang"
#################################################################################

### check for undefined behaviors first (from creduce scripts)

rm -f out*.txt


clang dec2bin.c -o out1
./out1 > temp1-dec2bin.txt

readonly EXIT_CODE="$?"
echo $EXIT_CODE
# cat temp1.txt
if [[ "${EXIT_CODE}" == "0" ]] && grep -q "1010" temp1-dec2bin.txt ; then
  exit 0
  echo "will I be printed"
fi

# if grep -q "hello" temp1.txt ; then
#   exit 0
# fi

#
# compcert first
#
# now we have passed everything, return 0
exit 1
