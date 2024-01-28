#!/bin/bash
# This is a script that outputs a random number between 1 and the number
# The script should be executable by the user

# Check if an argument is passed and store it in a variable
if [ $# -eq 1 ]; then
  number=$1
else
  # Prompt the user for a number and store it in a variable
  read -p "Enter a number: " number
fi

# Check if the number is less than or equal to 1 and output an error message if so
if [ $number -le 1 ]; then
  echo "Invalid number. Please enter a positive integer greater than 1."
  exit 1
fi

# Generate a random number between 1 and the number using the $RANDOM variable and the modulo operator
random=$(( $RANDOM % $number + 1 ))

# Print the output to the standard output stream
echo "You rolled a $random"
