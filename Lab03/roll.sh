#!/bin/bash
# This is a script that outputs a random number between 1 and the argument passed
# The script should be executable by the user

# Check if an argument is passed and store it in a variable
if [ $# -eq 1 ]; then
  number=$1
else
  echo "Invalid argument. Please enter a positive integer."
  exit 1
fi

# Check if the argument is less than 1 and output an error message if so
if [ $number -lt 1 ]; then
  echo "Invalid number. Please enter a positive integer."
  exit 1
fi

# Generate a random number between 1 and the argument using the $RANDOM variable and the modulo operator
random=$(( $RANDOM % $number + 1 ))

# Print the output to the standard output stream
echo "You rolled a $random"
