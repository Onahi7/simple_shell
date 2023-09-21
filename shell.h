#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/* Function prototypes */
int _putchar(char c);
void prompt(void);
char **parse_input(char *input);
int execute(char **args);
void free_args(char **args);

#endif /* SHELL_H */
