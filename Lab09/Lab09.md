## Lab 09

- Name:
- Email:

## Part 1 - Compiling

1. Method & command to get a copy of the source code files:
    -   # Clone the repository
        git clone --no-checkout https://github.com/pattonsgirl/CEG2350.git

    -   # Navigate to the cloned directory
        cd CEG2350

    -   # Initialize sparse-checkout
        git sparse-checkout init --cone

    -   # Set the desired subdirectory to be checked out
        git sparse-checkout set Labs/Lab09/TODO-C

    -   # Checkout the files
        git checkout

    -   # Navigate to the Lab09 directory within your local repository
        cd path/to/your/repository/Lab09

    -   # Stage the new files for commit
        git add .

    -   # Commit the changes with a descriptive message
        git commit -m "Added source code files from TODO-C"

    -   # Push the changes to the remote repository
        git push origin main


2. Windows C / C++ compiler
   - Download Windows installer from:
   - Confirm installed in Windows:
3. Linux C / C++ compiler
   - Download Linux installer from:
   - Confirm installed in Linux:
4. Browser based compiler for C / C++:
5. Command(s) to compile the source code into an executable program:
6. Command(s) to execute the program:

## Part 2 - Document

### Program User Guide

#### Program Description

#### How to Build and Run Program

#### How to Use Program

### `git` `branch` Guide

Create a branch:

Change to branch:

Add branch to remote if created locally (GitHub):

Steps to `merge` changes to another branch (`main`):

Steps to resolve a `merge` conflict: 

## Part 3 - makey makey

Using `Makefile` to build executable:

Using `Makefile` to run program:

Using `Makefile` to remove compilation files, such as the executable: 

## Extra Credit - Ignore That

Remove this statement and the exclamation point from the line below so TAs can click to check for a working `.gitignore` file.  Test that the link works - if it doesn't, fix the pathing.

![`.gitignore` file in root of repository](../.gitignore)