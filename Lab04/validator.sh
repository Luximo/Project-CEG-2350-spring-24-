#!/bin/bash

# Check if the file name is provided as an argument
if [ $# -eq 0 ]; then
  echo "Usage: validator filename"
  exit 1
fi

# Check if the file exists
if [ ! -f "$1" ]; then
  echo "Error: File $1 does not exist"
  exit 2
fi

# Sort the file content and remove duplicate entries
sort -u "$1" > clean1.txt

# Match only entries that start with letters or digits
grep -i '^[a-z0-9]' clean1.txt > clean2.txt

# Remove entries that contain consecutive non-alphanumeric characters
grep -v '[^a-z0-9]\{2,\}' clean2.txt > clean3.txt

# Match entries that end in a valid domain name
grep -i '@[a-z0-9]\+\.\(com\|org\|net\)$' clean3.txt > clean4.txt

# Print the final output
echo "The valid entries are stored in clean4.txt"
