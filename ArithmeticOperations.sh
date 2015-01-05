#!/bin/bash

read X
Y=$(echo "$X" | bc -l)
printf "%.3f\n" $Y
