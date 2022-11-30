#!/usr/bin/env bash


set -o nounset
set -o pipefail
clang t.c -o out1

readonly EXIT_CODE="$?"

echo $EXIT_CODE

if [[ "${EXIT_CODE}" == "0" ]]; then

  echo "It runs!"

  exit 0

  echo "An error occured!"

fi

exit 1