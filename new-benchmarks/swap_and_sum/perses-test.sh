#!/usr/bin/env bash


set -o nounset
set -o pipefail

rm a.out temp.txt &> /dev/null

readonly GCC="gcc"
readonly CLANG="clang"
#################################################################################

### check for undefined behaviors first (from creduce scripts)

rm -f out*.txt


clang t.c -o out1
./out1 > temp1.txt

readonly EXIT_CODE="$?"
echo $EXIT_CODE
# cat temp1.txt
if [[ "${EXIT_CODE}" == "15" ]] ; then
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