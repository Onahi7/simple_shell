## Project Overview

This project focuses on creating a command-line interpreter that resembles Unix, also known as a "shell." The main goal is to build a straightforward, fully functional "shell" from the ground up. Users will be able to interact with their operating system, run commands, and manage different system calls using this shell.


## Introduction to the Shell 

The shell is a critical component of Unix-like operating systems, providing users with a command-line interface to interact with their system. Understanding how a shell operates and the intricacies of command execution is fundamental to this project.

## Project Description 

The goal of this project is to create a unique command-line interpreter (CLI) that can perform the same functions as standard Unix shells. It will acknowledge and carry out commands.The simplicity that supports single-word commands without the use of pipes, redirections, or intricate scripting is what we are after.


## Project Requirements 

During the development process, a number of requirements must be followed in order to maintain consistency and code quality:
- All code files should be GCC 4.8.4 compliant and compatible with Ubuntu 14.04 LTS.
- The code should adhere to the Betty coding style, including validation using 'betty-style.pl' and 'betty-doc.pl'.
Memory leaks need to be carefully avoided.
- System calls should be used sparingly, taking into account how they may affect performance.

## List of functions and system calls we used
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)


## Expected Output

The shell should behave similarly to '/bin/sh', generating the same output and error messages. The program's name ('argv[0]'), which is displayed when errors occur, should also be displayed.


## Functions and System Calls

To accomplish its goals, the project makes use of a variety of system calls and functions. These include "access," "chdir," "execve," "fork," "malloc," "read," and "write," among others. For reference, a thorough list is available.


## Project Compilation

To compile the shell, the provided command should be used:
```Bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Testing

To make sure the shell operates properly, testing is crucial. The examples show how to use the shell both interactively and passively, showcasing its capabilities in various situations.


## Implementation Considerations 

Several factors should be taken into account when implementing:
- Interaction with the user, such as displaying a prompt and requesting input.
- Dealing with command execution, reporting errors, and re-prompting in response to errors.
- Gratefully handling the end-of-file condition (Ctrl+D).


## Contributors

The project has been developed by Dickson Hardy (dicksonhardy7@gmail.com) and Eno Osuji (enoosuji@gmail.com).



