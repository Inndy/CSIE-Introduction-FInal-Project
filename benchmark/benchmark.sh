#!/bin/bash

test_commands="./prime_origin ./prime_optimized ./prime.py ./prime.js"
make

c=0
for cmd in $test_commands; do
    N=1000
    echo $cmd

    if [ $c -lt 2 ]; then
        m=6
    else
        m=5
    fi

    for i in `seq $m`; do
        printf "%-12d  " $N
        echo $N | time $cmd 2>&1 | gawk '{if (n > 0) { print $3 } n++}'
        N="${N}0"
    done
    c=$(($c+1))
done
