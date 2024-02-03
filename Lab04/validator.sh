#!/bin/bash

# Check if the file name is provided as an argument
if [ $# -eq 0 ]; then
  echo "Please provide a file name as an argument."
  exit 1
fi

# Assign the file name to a variable
file=$1

# Check if the file exists
if [ ! -f "$file" ]; then
  echo "The file $file does not exist."
  exit 2
fi

# Sort the file content and remove duplicates
sort -u "$file" > clean1.txt

# Print a success message
echo "The file $file has been sorted and deduplicated. The output is in clean1.txt."
