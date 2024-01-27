#!/bin/bash
# This is a script that outputs a random number between 1 and the user's number
# The script should be executable by the user

# Prompt the user for a number and store it in a variable
read -p "Enter a number: " number

# Check if the number is less than 1 and output an error message if so
if [ $number -lt 1 ]; then
  echo "Invalid number. Please enter a positive integer."
  exit 1
fi

# Print the output to the standard output stream
echo "You rolled a $random"
