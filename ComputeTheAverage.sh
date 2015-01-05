#!/bin/bash

read N

C=0
T=0
while [ $C -lt $N ]
do
    read X
    T=$((T + X))
    C=$((C+1))
done

A=$(echo "$T / $N" | bc -l)
printf "%.3f\n" $A
