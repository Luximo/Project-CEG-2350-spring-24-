#!/bin/bash

# Define a function called printHelp
printHelp() {
  # Print the usage message
	echo "Usage: bulkrenamer.sh -f '"find"' -r '"replace""
 	# Print the description of the options
 	echo "-f The text to find in the filenames"
 	echo "-r The replacement text for the new filenames"
}

# Define the OPTSTRING
OPTSTRING=":hf:r:"

# Loop through the options using getopts
while getopts $OPTSTRING opt; do
  # Use a case statement to handle each option
	case $opt in
	h) # If the option is -h, call printHelp and exit
		printHelp
		exit
		;;
	f) # If the option is -f, save the argument as find_text
		find_text=$OPTARG
		;;
	r) # If the option is -r, save the argument as replacement_text
		replacement_text=$OPTARG
		;;
	\?) # If the option is not part of the OPTSTRING, print an error message and exit
      	echo "Invalid option: -$OPTARG" >&2
      	;;
	esac
done

# Loop through all the files in the current directory
for item in *
do
  # Rename each file by using sed to find and replace the text in the file name
  # The -e option specifies the expression to apply
  # The s command substitutes the find_text with the replacement_text
  # The g flag replaces all occurrences of the find_text
	mv "$item" "$(echo "$item" | sed -e s/$find_text/$replacement_text/g)"
done
