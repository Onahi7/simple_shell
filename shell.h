#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>           
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <limits.h>

/**
 * struct list_s - singly linked list of values
 * @name: string
 * @value: string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *name;
	char *value;
	struct list_s *next;
} list_t;

/**
 * struct built_s - Struct built_s
 * @name: built-in command
 * @f: function associated
 *
 * Description: struct representing shell built-in command
 */
typedef struct built_s
{
	char *name;
	int (*f)(list_t *input_list, char *shell_name, list_t **env_list_ptr);
} built_s;

/* betty.c */
void sig_handler(int sig);

/* envi_list.c */
list_t *create_env(char **env, list_t *env_list);
char *_getenv(list_t *envi_list, char *name);
void print_env(list_t *envi_list);
int _setenv(list_t *envi_list, const char *name, const char *value, int ow);
int _unsetenv(list_t *envi_list, const char *name);

/* listing.c */
list_t *add_node_end(list_t **head, const char *name, const char *value);
list_t *create_node(const char *name, const char *value);
list_t *split_string(char *str, char *delim);
void free_node(list_t *h);
void free_list(list_t *h);
size_t list_len(const list_t *h);
char **list_to_array(const list_t *h);
void free_array(char **arr);
int find_name(list_t *h, const char *name);
int update_value(list_t *h, int index, const char *value);
int delete_node_index(list_t **head, int index);

/* simple-shell.c */
int shell(list_t *env_list, char *shell_name);
char *get_input(void);
void print_error(char **error_message);
void prompt(void);
void free_input(char *input, list_t *input_list, char **input_array);
int execute(char **input_array, char *command, char *shell_name);
void error_message_init(char **error_message, char *shell_name, char *command)

#endif
