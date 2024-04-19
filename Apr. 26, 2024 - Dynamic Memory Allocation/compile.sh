#!/bin/bash

if [[ $# -eq 0 ]]; then
    echo "Usage: ./compile.sh <source_file>"
    exit 1
fi

source_file=$1

clang++ -g "$source_file" -o "${source_file%.*}"
