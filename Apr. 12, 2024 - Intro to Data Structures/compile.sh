#!/bin/bash

if [[ $# -eq 0 ]]; then
    echo "Usage: ./compile.sh <source_file>"
    exit 1
fi

source_file=$1

which g++-10 >/dev/null

if [[ $? -ne 0 ]]; then
    echo "g++-10 not found. Please install it."
    exit 1
fi

g++-10 -std=c++20 -g "$source_file" -o "${source_file%.*}"
