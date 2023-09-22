#include "shell.h"
#include <signal.h>
#define MAX_ARGS 64

/**
 * main - Entry point for the shell program
 * @argc: Number of arguments passed through command line
 * @argv: Array of arguments passed through command line
 *
 * Returns 0 on success, non-zero value on error
 */

int simple_shell(int argc, char *argv[])
{
	int ret_value = 0;
	inform state[] = {INIT};
	int interact;
	char *command = NULL;
	char *arguments[MAX_ARGS];
	size_t buf_no = 0;
	char *token, *delimiter = " \n\t";

	signal(SIGINT, signal_han);
	while (ret_value != -3)
	{
		interact = interactive();
		if (interact)
			write(1, "$ ", 2);
		if (getline(&command, &buf_no, stdin) == -1)
			break;
		token = tokenizeString(command, delimiter);
		argc = 0;

		while ((token != NULL) && (argc < MAX_ARGS))
		{
			arguments[argc++] = token;
			token = tokenizeString(NULL, delimiter);
		}
		arguments[argc] = NULL;
		if (argc != 0)
			ret_value = check_command(arguments, argv, state);
	}

	free(command);
	if (!interactive() && state->status)
		exit(state->status);
	if (ret_value == -3)
	{
		if (state->exit_num == -1)
			exit(state->status);
		exit(state->exit_num);
	}
	return (0);
}
