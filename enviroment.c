#include <string.h>
#include "shell.h"

/**
 * enviroment_print - this function displays environment variables
 * @arguments: argument
 * Return: 0 on success, -1 on failure
 */
int enviroment_print(char **arguments)
{
    char **env = environ;
    (void)arguments;

    for (; *env != NULL; env++)
    {
        /* Print each environment variable */
        if (write(1, *env, strlen(*env)) == -1)
        {
            perror("write");
            return -1;
        }

        if (write(1, "\n", 1) == -1)
        {
            perror("write");
            return -1;
        }
    }

    return 0;
}

