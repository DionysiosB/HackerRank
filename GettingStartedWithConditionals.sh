#!/bin/bash

read X

if [ "$X" == "y" ]
then
    echo "YES"
fi

if [ "$X" == "Y" ]
then
    echo "YES"
fi

if [ "$X" == "n" ]
then
    echo "NO"
fi

if [ "$X" == "N" ]
then
    echo "NO"
fi
