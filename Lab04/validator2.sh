#!/bin/bash

# validator2: a bash script to validate email addresses using a regex

# the regex to use for email validation
regex=$(cat regex.txt)

# the input file name
input_file=$1

# the output file name
output_file="validemails.txt"

# check if the input file exists and is readable
if [ ! -f "$input_file" ] || [ ! -r "$input_file" ]; then
  echo "Input file does not exist or is not readable."
  exit 1
fi

# loop through each line of the input file
while read -r line; do
  # check if the line matches the regex
  if [[ $line =~ $regex ]]; then
    # append the line to the output file
    echo "$line" >> "$output_file"
  fi
done < "$input_file"

# print a success message
echo "The valid email addresses have been written to $output_file."
