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
./out1 100 + 100 > temp1.txt
readonly EXIT_CODE="$?"
echo $EXIT_CODE

if [[ "${EXIT_CODE}" == "0" ]] && grep -q "200" temp1.txt ; then

return 0
fi

return 1
}

desired