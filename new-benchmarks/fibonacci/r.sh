#!/usr/bin/env bash


set -o nounset
set -o pipefail

rm a.out temp.txt &> /dev/null


clang t.c -o out1
./out1 10 > temp1.txt

readonly EXIT_CODE="$?"

echo $EXIT_CODE

if [[ "${EXIT_CODE}" == "55" ]] ; then

  echo "It runs!"

  exit 0

  echo "An error occured!"

fi

exit 1