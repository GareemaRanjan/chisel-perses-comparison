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
./out1 hi hi > temp1.txt
./out1 hello bye > temp2.txt

readonly EXIT_CODE="$?"
echo $EXIT_CODE
# cat temp1.txt
if [[ "${EXIT_CODE}" == "0" ]] && grep -q "EQUAL" temp1.txt && grep -q "First" temp2.txt; then
 exit 0
 echo "will I be printed"
fi

return 1
}

desired