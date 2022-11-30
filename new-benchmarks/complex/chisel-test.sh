#!/bin/bash

export BENCHMARK_NAME=mycode
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME/merged
export SRC=$BENCHMARK_DIR/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME
export REDUCED_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 0.5 0.5"
export LOG=$BENCHMARK_DIR/log.txt

source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh


function desired() {
rm -rf out1

clang mycode.c -o out1
./out1 > temp.txt

readonly EXIT_CODE="$?"
echo $EXIT_CODE
#if ! clang t.c >> temp.txt 2>&1 ; then
#  exit 1
#fi
#
cat temp.txt
if [[ "${EXIT_CODE}" == "0" ]] && grep -q 'world' temp.txt ; then
 return 0
 echo "will I be printed"
fi

if grep -q "Wimplicit-int" temp.txt || \
   grep -q "defaulting to type" temp.txt || \
   grep -q "Wmain-return-type" temp.txt || \
   grep -q "Wimplicit-function-declaration" temp.txt || \
   grep -q "Wincompatible-library-redeclaration" temp.txt || \
   grep -q "too few arguments" temp.txt ; then
  return 1
fi



return 1

}

desired