#include "shell.h"
#define MAX_LEN 80

/**
 * parse_input - Parse input command and arguments
 * @arguments: Array of command and arguments 
 * @argv: Argument array from main
 * @state: Pointer to status code   
 *
 * Returns: Status code
*/
int parse_input(char **arguments, char **argv, inform *state)
{
	c_t m[] = {{"env", enviroment_print}, {"exit", terminal_exit}, {NULL, NULL}};
	int i;
	char *result, *pat, *cop, fullpath[MAX_LEN];
	struct stat buf;

	for (i = 0; m[i].command; i++)
	{
		if (match_strings(arguments[0], m[i].command) == 0)
		{
			return (m[i].fun(arguments, state, argv));
		}
	}
	pat = getenv("PATH");
	cop = string_clone(pat);
	if (!cop && arguments[0][0] != '/')
	{
		write(2, argv[0], str_size(argv[0]));
		write(2, ": 1: ", 5);
		write(2, arguments[0], str_size(arguments[0]));
		write(2, ": not found\n", 12);
		state->status = 127;
	}
	else if (stat(arguments[0], &buf) == 0)
		execute(arguments[0], arguments, argv, state);
	else
	{
		result = find_exec(arguments[0], fullpath);
		if (result != NULL)
			execute(result, arguments, argv, state);
		else
		{
			write(2, argv[0], str_size(argv[0]));
			write(2, ": 1: ", 5);
			write(2, arguments[0], str_size(arguments[0]));
			write(2, ": not found\n", 12);
			state->status = 127;
		}
	}
	free(cop);
	return (state->status);
}
