#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <limits.h>

/**
 * struct information - information about status code
 * @status: the status code for exec
 * @exit_num: exit num
 */
typedef struct information
{
	int status;
	int exit_num;
} inform;

#define INIT {0, 0}

/**
 * struct cmd_type - structure for command name to execute function
 * @command: command names
 * @fun: functions allocated
 */
typedef struct cmd_type
{
	char *command;
	int (*fun)();
} c_t;
extern char **environ;

/* Function prototypes */
void copy_string(char *dest, char *src);
int enviroment_print(char **arguments);
void execute(char *command, char **arguments, char **argv, inform *state);
char *find_char(char *s, char c);
char *find_exec(char *executable, char *fullpath);
void handler(int sig);
int interactive(void);
void signal_han(int sig);
void join_strings(char *destination, const char *src);
int match_strings(char *s1, char *s2);
int parse_input(char **arguments, char **argv, inform *state);
int shell_exit(char **arguments, inform *state, char **argv);
int terminal_exit(char **arguments, inform *state, char **argv);
int check_command(char **arguments, char **argv, inform *state);
int simple_shell(int argc, char *argv[]);
int str_size(char *str);
char *string_clone(char *str);
int string_to_int(char *str);
char *tokenizeString(char *str, const char *delimiters);

#endif /* SHELL_H */
