#!/bin/bash
# This is a script that outputs a random number between 1 and 20
# The script should be executable by the user

# Generate a random number between 1 and 20 using the $RANDOM variable and the modulo operator
number=$(( $RANDOM % 20 + 1 ))

# Print the output to the standard output stream
echo "You rolled a $number"
