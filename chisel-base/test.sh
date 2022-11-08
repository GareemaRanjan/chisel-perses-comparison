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

function run(){
        { $ORIGIN_BIN ;} 2> temp.txt
        var1=$(cat temp.txt)
        echo $var1
        if [[ "$var1" == "$var2" ]]; then
          echo "Strings are equal."
          return 0
      else
          echo "Strings are not equal."
          return 1
      fi
}
function desired() {
        rm -rf out1
        clang mycode.c -o out1
        ./out1 > temp1
        cmp temp1 Hello.txt || exit 1

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

#main
desired