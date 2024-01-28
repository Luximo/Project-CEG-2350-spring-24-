#!/bin/bash
# This is a script that outputs a random number for each die
# The script should be executable by the user

# Check if two arguments are passed and store them in variables
if [ $# -eq 2 ]; then
  dice=$1
  sides=$2
else
  # Set the dice and sides to 0 initially
  dice=0
  sides=0
fi

# Loop until the dice and sides are greater than 1
while [ $dice -le 1 ] || [ $sides -le 1 ]; do
  # Prompt the user for the number of dice and store it in a variable
  read -p "Enter the number of dice: " dice
  # Prompt the user for the number of sides and store it in a variable
  read -p "Enter the number of sides: " sides
  # Check if the dice or sides are less than or equal to 1 and output an error message if so
  if [ $dice -le 1 ] || [ $sides -le 1 ]; then
    echo "Invalid numbers. Please enter positive integers greater than 1."
  fi
done

# Loop through the number of dice
for (( i=1; i<=$dice; i++ )); do
  # Generate a random number between 1 and the number of sides using the $RANDOM variable and the modulo operator
  random=$(( $RANDOM % $sides + 1 ))
  # Print the output to the standard output stream
  echo "Die $i rolled a $random"
done
