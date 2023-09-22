#include "shell.h"
#include <signal.h>

/**
 * shell_exit - exits terminal
 * @arguments: arguments
 * @state:structure
 * @argv: argv
 * Return: status code
 */
int shell_exit(char **arguments, inform *state, char **argv)
{
	int i = 0, exit_status = 0;

	while (arguments[i] != NULL)
	{
		i++;
	}

	if (arguments[1])
	{
		exit_status = string_to_int(arguments[1]);
		if (exit_status == -1)
		{
			write(2, argv[0], str_size(argv[0]));
			write(2, ": 1: ", 5);
			write(2, arguments[0], str_size(arguments[0]));
			write(2, ": Illegal number: ", 18);
			write(2, arguments[1], str_size(arguments[1]));
			write(2, "\n", 1);
			state->status = 2;
			return (1);
		}
		state->exit_num = exit_status;
		return (-3);
	}
	state->exit_num = -1;
	return (-3);
}
