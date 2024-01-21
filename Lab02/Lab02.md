## Lab 02

- Name: Moses Otuvedo
- Email: Otuvedo.3@wright.edu

## Part 1 Answers

The answers for this section are to help you record what steps  
are needed to create a file locally (in your cloned repo)  
and push them (sync) with GitHub.  Only `git` commands are 
valid answers

1. View the status of the repository: `git status`
2. Add a file for tracking: `git add Lab02.md`
3. Commit changes: `git commit -a`
4. Sync local commits with GitHub: `git push`
5. Sync commits on GitHub to `clone`d repository: `git pull origin main`

## Part 2 Answers

1. `chmod u+r bubbles.txt`
    - Means: By executing this command, the owner of the file bubbles.txt is granted the privilege of accessing the file’s contents, while the permissions for the group and others remain unaltered.

2. `chmod u=rw,g-w,o-x banana.cabana`
    - Means: This command modifies the privileges for the file or directory banana.cabana according to the following criteria: the owner has the ability to access and modify the file or directory, but not to run it as a program or script; the group has the ability to access and run the file or directory, but not to modify it; the others have the ability to access the file or directory, but not to modify or run it.

3. `chmod a=w snow.md`
    - Means: This command modifies the privileges for the file snow.md such that every user has the capability to alter the file, but lacks the capability to access or run the file.

4. `chmod 751 program`
    - Means: This command modifies the privileges for the file or directory program by employing the numeric mode. The owner possesses the capabilities to access, alter, and run (7). The group possesses the capabilities to access and run, but lacks the capability to alter (5). The others possess the capability to run, but lack the capabilities to access or alter (1).
    
5. `chmod -R ug+w share`
    - Means: This command confers the privilege of altering the file or directory share to the owner and the group, and propagates the change to all the subordinate files and directories by using the -R option. The owner and the group possess the capability to alter, but the privileges for the others remain unmodified.”



## Part 3 Answers

For each, write the command used or answer the question posed.

1. `sudo adduser motuvedo`

2. `/home/motuvedo`

3. I don't think so, this negates the possibility of user ubuntu having the privilege of altering the contents of motuvedo's home directory. The sole possessor of the privilege of alteration is motuvedo.”

4. `su motuvedo`

5. `cd ~`

6. I think so, this affirms the possibility of user motuvedo possessing the privilege of altering the contents of motuvedo's home directory.”

7. `su ubuntu`

8. `cd ~`

## Part 4 Answers

For each, write the command used or answer the question posed.

1. `sudo addgroup crew`

2. `sudo usermod -a -G crew ubuntu`
   `sudo usermod -a -G crew motuvedo`

3. `sudo chgrp crew share`

4. `su motuvedo`

5. `touch file.txt`

6. User motuvedo belongs to the crew group, which possesses the privilege of accessing the directory share.

## Part 5 Answers

For each, write the command used or answer the question posed.

1. `sudo touch sudowho.txt`

2. `root root`: root is the file owner and root is the group owner.

3. `sudo vim sudowho.txt`

4. `sudo chown ubuntu:crew sudowho.txt`
   `chmod u=rw,g=rw,o= sudowho.txt`

## Part 6 Answers

1. `ssh` command before configuring `config` file: `ssh -i ceg2350.pem ubuntu@184.73.215.70`
2. HostName: `184.73.215.70`
3. User: `ubuntu`
4. IdentityFile: `/.ssh/ceg2350key.pem`
5. `~/.ssh/config` contents: 

```
Host ceg2350
        Hostname 184.73.215.70
        user ubuntu
        IdentityFile ~/.ssh/ceg2350key.pem

```

6. `ssh` command after configuring an entry in the `config` file: `ssh ceg2350`