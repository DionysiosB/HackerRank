#/bin/bash

while read line; do
    echo $line | cut -c2,7
done
