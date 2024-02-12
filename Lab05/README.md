### Namechange
- Namechange (`namechange.sh`) is a script that helps you rename files on your PC. It lets you specify a pattern of text that you want to find in the file name and a pattern of text that you want to replace it with. For example, you can use it to change the spaces in a file name to dashes or to correct a spelling mistake...

### Table of Contents

- [Namechange](#Namechange)
    - [Table of Contents](#table-of-contents)
    - [Features](#features)
    - [Installation](#installation)
    - [Usage](#usage)
    - [Support](#support)
    - [Roadmap](#roadmap)
    - [License](#license)
    - [Dependencies](#dependencies)
    - [Contributors](#contributors)
    - [FAQ](#faq)
        - [How do I use extended regular expressions for the find and replace patterns...?](#how-do-I-use-extended-regular-expressions-for-the-find-and-replace-patterns...?)
        - [How do I escape special characters in the find and replace patterns...?](#how-do-I-escape-special-characters-in-the-find-and-replace-patterns...?)
        - [How do I rename multiple files at once with the same find and replace patterns...?](#how-do-I-rename-multiple-files-with-the-same-find-and-replace-patterns...?)
        - [How do I undo the changes made by the script...?](#how-do-I-undo-the-changes-made-by-the-script...?)

### Features
- Supports extended regular expressions for the find and replace patterns
- Checks if the file name was provided and if the file exists
- Prints a message to confirm the change or report an error
- Has a help option to show the usage and description of the script


### Installation
- To install the script, you can either download it from GitHub or clone the repository using the following command:

- `git clone git@github.com:WSU-kduncan/ceg2350s24-Luximo.git`


### Usage
- To use the script, you need to open a terminal window and type the following command:

1. `bash namechange -f find -r replace filename`
- where `find` is the text that you want to find in the `file name`, `replace` is the text that you want to replace it with, and `filename` is the name of the file that you want to rename.

2. For example, if you have a file named “`1-pic.jgp`” and you want to rename it to "`1-pic.jpg`”, you can type the following command:

-  `bash namechange.sh -f "jgp" -r "jpg" 1-pic.jgp`

- This will replace the wrong pattern (“`jgp`”) with the correct pattern (“`jpg`”) in the file name.

3. The script will then rename the file and print a message to confirm the change. For example, it will say:

- Renamed "`1-pic.jgp`" to `1-pic.jpg`

4. If the script cannot find the pattern in the file name, or if the file does not exist, it will print an error message and exit. For example, it will say:

- `User must provide valid filename`
or
- `No changes made to "1-pic.jgp"`

5. The script also has a help option that you can use to see the usage and description of what the script can do for you whenever you're stuck or something else. To use the help option, you can type the following command:

- `bash namechange.sh -h`

- This will print the following message:

```Usage: namechange -f find -r replace filename
 -f The text to find in the filename`
 -r The replacement text for the new filename
 ```
6. Finally, that’s how the script works. It helps you rename files on your computer by finding and replacing patterns of text in the file name. Easy right...?😇 *don't worry, I know...🫱🏾‍🫲🏼*

### Support
- If you have any questions or issues with the script, you can contact me at otuvedo.3@wright.edu or open an issue on GitHub.

### Roadmap
- Some of the features that I plan to add to the script in the future are:

1. A backup option to save the original file before renaming it
2. A recursive option to apply the find and replace operation to all the files in a given directory or subdirectory
3. A verbose option to print the details of the renaming process
4. A dry-run option to simulate the renaming process without actually changing the file names
5. A confirmation option to ask the user for permission before renaming each file

### License
- The script is licensed under the MIT License. See the LICENSE file for more information.

### Dependencies
- The script does not have any external dependencies. It only uses the built-in commands and tools of the bash shell, such as getopts, sed, and mv as required.

### Contributors
- The script was created by me, Moses Otuvedo, as a class lab project. I welcome any feedback, suggestions, or contributions from other users. You can reach me at otuvedo.3@wright.edu or on GitHub.

### FAQ
- Here are some frequently asked questions and answers about the script:

- Q: How do I use extended regular expressions for the find and replace patterns...?
  A: You can use any valid regular expression syntax that is supported by the sed command with the -E option. For example, you can use quantifiers, character classes, alternation, grouping, and backreferences.

- Q: How do I escape special characters in the find and replace patterns...?
  A: You can use a backslash `()` to escape any special characters that have a meaning in regular expressions or bash, such as `/, &, $, *, ?, etc.` For example, if you want to find and replace the literal text “`/foo/bar`”, you can use the following command:

  `bash namechange -f "\/foo\/bar" -r "baz" filename`

- Q: How do I rename multiple files at once with the same find and replace patterns...?
  A: You can use a loop or a glob pattern to pass multiple file names to the script. For example, if you want to rename all the files in the current directory that have the extension .txt, you can use the following command:

  `for file in *.txt; do bash namechange -f find -r replace "$file"; done`

or

  `bash namechange -f find -r replace *.txt`

- Q: How do I undo the changes made by the script...?
  A: The script does not have an undo option, so you need to be careful before renaming any files. However, if you make a mistake, you can try to reverse the find and replace patterns and run the script again. For example, if you renamed “`hello world.md`” to “`hello-world.md`”, you can try to rename it back with the following command:

  `bash namechange -f "-" -r "\s" "hello-world.md"`
