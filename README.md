

 Project Overview 

This project focuses on creating a command-line interpreter that resembles Unix, also known as a "shell." The main goal is to build a straightforward, fully functional "shell" from the ground up. Users will be able to interact with their operating system, run commands, and manage different system calls using this shell.


 Introduction to the Shell 

The shell is a critical component of Unix-like operating systems, providing users with a command-line interface to interact with their system. Understanding how a shell operates and the intricacies of command execution is fundamental to this project.

 Project Description 

The goal of this project is to create a unique command-line interpreter (CLI) that can perform the same functions as standard Unix shells. It will acknowledge and carry out commands.The simplicity that supports single-word commands without the use of pipes, redirections, or intricate scripting is what we are after.


 Project Requirements 

During the development process, a number of requirements must be followed in order to maintain consistency and code quality:
- All code files should be GCC 4.8.4 compliant and compatible with Ubuntu 14.04 LTS.
- The code should adhere to the Betty coding style, including validation using 'betty-style.pl' and 'betty-doc.pl'.
Memory leaks need to be carefully avoided.
- System calls should be used sparingly, taking into account how they may affect performance.


 Expected Output 

The shell should behave similarly to '/bin/sh', generating the same output and error messages. The program's name ('argv[0]'), which is displayed when errors occur, should also be displayed.


 Functions and System Calls 

To accomplish its goals, the project makes use of a variety of system calls and functions. These include "access," "chdir," "execve," "fork," "malloc," "read," and "write," among others. For reference, a thorough list is available.


 Project Compilation 

To compile the shell, the provided command should be used:
```Bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

 Testing 

To make sure the shell operates properly, testing is crucial. The examples show how to use the shell both interactively and passively, showcasing its capabilities in various situations.


 Implementation Considerations 

Several factors should be taken into account when implementing:
- Interaction with the user, such as displaying a prompt and requesting input.
- Dealing with command execution, reporting errors, and re-prompting in response to errors.
- Gratefully handling the end-of-file condition (Ctrl+D).


 Contributors 

The project has been developed by Dickson Hardy (dicksonhardy7@gmail.com) and Eno Osuji (enoosuji@gmail.com).



