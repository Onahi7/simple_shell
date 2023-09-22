#include <string.h>
#include "shell.h"


/**
 * enviroment_print - this function displays environment variables
 * @arguments: argument
 * Return: nothing
 */

int enviroment_print(char **arguments)
{
	char **env = environ;

	(void)arguments;
	for (; *env != NULL; env++)
	{
		write(1, *env, strlen(*env));
		write(1, "\n", 1);
	}
	return (0);
}
