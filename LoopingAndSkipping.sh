#!/bin/bash
a=1
while [ $a -le 100 ]
do
    echo $a
    a=$((a+2))
done
