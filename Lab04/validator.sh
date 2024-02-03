#!/bin/bash

# Check if the file name is provided as an argument
if [ $# -eq 0 ]; then
  echo "Usage: validator filename"
  exit 1
fi

# Assign the file name to a variable
filename=$1

# Check if the file exists
if [ ! -f "$filename" ]; then
  echo "Error: File $filename does not exist"
  exit 2
fi

# Sort the file content and remove duplicate entries
sort -u "$filename" > clean1.txt

# Print a success message
echo "File $filename has been sorted and deduplicated. Output saved to clean1.txt"
