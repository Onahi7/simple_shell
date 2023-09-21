#include "shell.h"

/**
 * main - Implements a super simple shell.
 *
 * @ac: Number of command line arguments.
 * @av: Array of command line arguments.
 * @env: Array of environment variables.
 *
 * Return: 0 on success, 1 otherwise.
 */
int main(int ac, char **av, char **env)
{
    list_t *env_list = NULL;
    int shell_return;

    /* Create env_list */
    env_list = create_env(env, env_list);

    /* Handle SIGINT */
    signal(SIGINT, sig_handler);

    /* Start the shell */
    shell_return = shell(env_list, av[0]);

    /* Check the return value of the shell */
    if (shell_return)
    {
        free_list(env_list);
        exit(shell_return);
    }

    (void)ac;

    free_list(env_list);

    return (0);
}

/**
 * sig_handler - Handles SIGINT.
 * @sig: SIGINT.
 */
void sig_handler(int sig)
{
    signal(sig, sig_handler);
    write(STDOUT_FILENO, "\n", 2);
    prompt();
}

