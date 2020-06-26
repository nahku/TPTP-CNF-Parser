#!/bin/bash
target="/TPTP-v7.3.0"

while read line
do
    name=$line
    echo "Text read from file - $name"
    find "${target}" -name "$name" -exec cp {} /found_files \;    

done < $1