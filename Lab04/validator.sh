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

# Match only entries that start with letters or digits
grep -i '^[a-z0-9]' clean1.txt > clean2.txt

# Remove entries that contain consecutive non-alphanumeric characters
grep -v '[^a-z0-9]\{2,\}' clean2.txt > clean3.txt

# Print a success message
echo "The file $file has been sorted, deduplicated, filtered, and cleaned. The output is in clean3.txt."
