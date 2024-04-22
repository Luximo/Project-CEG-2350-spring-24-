## Lab 11

- Name: Moses Otuvedo
- Email: Otuvedo.3@wright.edu

## Part 1 Answers:

1. `tar` options:
   - `-c`: Instantiate a novel archival entity.

   - `-v`: Enumerate the files processed with exhaustive detail.

   - `-f`: Employ the subsequent argument as the designated nomenclature for the archival entity.

   - `-z`: Condense the archival entity utilising the gzip compression schema.

   - `-x`: Retrieve the constituents from an archival repository.

2. Command(s) to create and compress your archive: `tar -cvzf project_bluestorm.tar.gz ceg2350s24-Luximo data`

## Part 2 Answers:

1. Command to connect with `sftp`: `sftp -i ceg2350.pem ubuntu@184.73.215.70`
2. `sftp` options:
   - `ls`: Enumerates the constituents, both files and directories alike, situated within the present directory on the distant machine.

   - `lls`: Catalogues the entities, encompassing files and directories, that reside within the immediate directory on the proximal machine.
   - `put`: Transmits a file from the proximal machine to the distant apparatus, effectuating an upload.

   - `get`: Procures a file from the distant apparatus, effecting a download to the proximal machine.

3. Command(s) to use `sftp` to download your `.tar.gz` file to your system: `get project_bluestorm.tar.gz`

4. Command(s) to decompress & extract your `.tar.gz` file to your system: ` tar -xvzf project_bluestorm.tar.gz`

## Part 3 Answers:

1. Command to generate a new key, with options entered into the fields 
```
luximo1@Lux:~$ ssh-keygen -t rsa -b 4096 -f ~/.ssh/my_custom_keypair -C "my custom keypair"
Generating public/private rsa key pair.
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /home/luximo1/.ssh/my_custom_keypair
Your public key has been saved in /home/luximo1/.ssh/my_custom_keypair.pub
The key fingerprint is:
SHA256:Iwv/ZwNymI3rkYYbgijXV+kJtHugKbf0WDSAHWREKro my custom keypair
The key's randomart image is:
+---[RSA 4096]----+
|   +*            |
|   = .           |
|. o o .          |
|..   o . .       |
|.   . B=S        |
|.o . B=@+o       |
|E + O X++.       |
|.. = X.+  +      |
|    +.o .o .     |
+----[SHA256]-----+
luximo1@Lux:~$
```

2. Create the user and / or prove the user exists
```
ubuntu@ip-10-0-0-25:~$ sudo adduser luxy
Adding user `luxy' ...
Adding new group `luxy' (1004) ...
Adding new user `luxy' (1004) with group `luxy' ...
Creating home directory `/home/luxy' ...
Copying files from `/etc/skel' ...
New password:
Retype new password:
passwd: password updated successfully
Changing the user information for luxy
Enter the new value, or press ENTER for the default
        Full Name []: Lux
        Room Number []: 75
        Work Phone []: 1234567890
        Home Phone []: 0987654321
        Other []: x
Is the information correct? [Y/n] Y
ubuntu@ip-10-0-0-25:~$ getent passwd luxy
luxy:x:1004:1004:Lux,75,1234567890,0987654321,x:/home/luxy:/bin/bash
ubuntu@ip-10-0-0-25:~$
```

3. Contents of `~/.ssh/authorized_keys` in remote user account:
```
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAACAQDXnfprSiEXxgBAz3AYLfAbE0A0DCIbNZxoxcrWWeRyUo0QSKUBBWtO2DGcdBL/fZYGlbphJJSMaQRrVzfHMCRQW6WY1uG/y7G34oS0nguvhz0V4/YOqr0M5wORgi/vuWlqlO87qRM8vtVBRNzQVQDucnWm1cjmKSS8I93AwbmDptI2WxMUPWCjbpNyvSqRTnxNlvhFU1TgWrpqgr6UsAFCRlfi72D9czUGsJWlFcvcgUzTgatKos80gbFqkJ+uKnj+KgnCzjKWhb9B3oGEg3eai6Zb8A+19A0dTRygCTFwm9u3MhH6W/TpM5ozKAPraaJbXrlb5bK9MChmG1/9sbVLtKwGkj832dWpQWyi/gmIp8lO6jGTMrsB9RQ5VPluWELtcfVy/roUmmMTM3auyLR7aZqJdbx8khBWEj/3u4OFo1kOZnoulBbzarX/Cl/si4oMJX7X69AZmlMhLsCtOdJezkKc78JZxLkPhaasaJeB0auHuTWhtHJuycdcpf20YlUdHCO0WUNcVTqaBdolRAon98cV9ynY1Gv/Dh7X6ao1GIfMXBTZtg37dF5RBPTC+wvWwSzca6uxQN65xrWZscN0RO9rmU8fb8AoR61su7aYvKvoOlromD6DGm+OISy2rmIvaU+d2cQ/RAA7X34OWx+zmjCp9OmXaofnQppn1Zs4sQ== my custom keypair
```

4. `ssh` command: `ssh -i ~/.ssh/my_custom_keypair luxy@184.73.215.70`

5. Updated `config` file contents:
```
Host ceg2350
     Hostname 184.73.215.70
     user ubuntu
     IdentityFile ~/.ssh/ceg2350key.pem

Host luxy
  HostName 184.73.215.70
  User luxy
  IdentityFile ~/.ssh/my_custom_keypair
```

6. `ssh` command post `config` file entry: `ssh luxy`