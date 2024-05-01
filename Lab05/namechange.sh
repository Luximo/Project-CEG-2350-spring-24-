# Define a function called printHelp
printHelp() {
  # Print the usage message
  echo "Usage: namechange -f find -r replace filename"
  # Print the description of the options
  echo " -f The text to find in the filename"
  echo " -r The replacement text for the new filename"
}

# Define the OPTSTRING
OPTSTRING=":hf:r:"

# Loop through the options using getopts
while getopts $OPTSTRING opt; do
  case $opt in
    h) # If the option is -h, call printHelp and exit
      printHelp
      exit 0
      ;;
    f) # If the option is -f, save the argument as find
      find=$OPTARG
      ;;
    r) # If the option is -r, save the argument as replace
      replace=$OPTARG
      ;;
    \?) # If the option is not part of the OPTSTRING, call printHelp and exit
      echo "Invalid option: -$OPTARG" >&2
      printHelp
      exit 1
      ;;
  esac
done

# Shift the positional parameters to get the filename
shift $((OPTIND-1))

# Check if the filename was provided
if [ -z "$1" ]; then
  # If not, output an error message, call printHelp and exit
  echo "User must provide valid filename" >&2
  printHelp
  exit 2
fi

# Check if the filename exists
if [ ! -f "$1" ]; then
  # If not, output an error message, call printHelp and exit
  echo "User must provide valid filename" >&2
  printHelp
  exit 3
fi

# Store the old file name in a variable
old_file="$1"

# Use sed with the -E option to find and replace the pattern in the filename
# The -E option enables extended regular expressions
# The s command substitutes the find pattern with the replace pattern
# The g flag replaces all occurrences of the pattern
# The p flag prints the result
# The -n option suppresses the default output
new_file=$(sed -E -n "s/$find/$replace/gp" <<< "$old_file")

# Check if the new file name is different from the old file name
if [ "$new_file" != "$old_file" ]; then
  # If yes, rename the file and print a message
  mv "$old_file" "$new_file"
  echo "Renamed \"$old_file\" to $new_file"
else
  # If no, print a message
  echo "No changes made to \"$old_file\""
fi