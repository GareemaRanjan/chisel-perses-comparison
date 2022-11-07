#!/bin/bash

export BENCHMARK_NAME=mycode
export BENCHMARK_DIR=$CHISEL_BENCHMARK_HOME/benchmark/$BENCHMARK_NAME/merged
export SRC=$BENCHMARK_DIR/$BENCHMARK_NAME.c
export ORIGIN_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME
export REDUCED_BIN=$BENCHMARK_DIR/$BENCHMARK_NAME.reduced
export TIMEOUT="-k 0.5 0.5"
export LOG=$BENCHMARK_DIR/log.txt

source $CHISEL_BENCHMARK_HOME/benchmark/test-base.sh

function clean() {
#  echo "in clean"
  sleep 2
#  echo "clean"
  return 0
}

function desired() {
        var2="Hello World\n"
#        ls
#        echo $SRC
#        ls
#        clang $SRC
        $ORIGIN_BIN
#        { timeout $TIMEOUT $REDUCED_BIN -k foo; } >&$LOG || exit 1
#        echo $var2
#        if [ "$var1" = "$var2" ]; then
#          echo "Up-to-date"
#          fi
        # shellcheck disable=SC2046
#        echo $(test "$REDUCED_BIN" == "$var2")
#        test $REDUCED_BIN == "Hello World" || exit 1
#        clang mycode.c.origin.c || "Hello World"
        return 0
}

function undesired() {
#  echo "in undesired"
  return 0
}

function desired_disaster() {
#  echo "in des dis"
  return 1
}

main
