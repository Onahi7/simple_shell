#include "shell.h"

/**
 * main - Simple shell
 *
 * Return: Always 0.
 */
int main(void)
{
    char input[MAX_INPUT_SIZE];
    char prompt[] = "$ ";

    while (1)
    {
        if (write(STDOUT_FILENO, prompt, sizeof(prompt) - 1) == -1)
        {
            perror("write");
            _exit(EXIT_FAILURE);
        }
        if (!fgets(input, sizeof(input), stdin))
        {
            if (feof(stdin))
            {
                /* End of file (Ctrl+D) condition */
                if (write(STDOUT_FILENO, "\nShell terminated.\n", 19) == -1)
                    perror("write");
                break;
            }
            else
            {
                perror("fgets");
                _exit(EXIT_FAILURE);
            }
        }

        /* Remove the trailing newline character */
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n')
        {
            input[len - 1] = '\0';
        }

        if (strcmp(input, "exit") == 0)
        {
            break;  /* Exit the shell */
        }

        pid_t pid = fork();

        if (pid == 0)
        {
            /* Child process */
            char *argv[] = {input, NULL};
            execve(input, argv, NULL);
            perror("execve");
            _exit(EXIT_FAILURE);
        }
        else if (pid < 0)
        {
            perror("fork");
            _exit(EXIT_FAILURE);
        }
        else
        {
            /* Parent process */
            int status;
            if (waitpid(pid, &status, 0) == -1)
            {
                perror("waitpid");
                _exit(EXIT_FAILURE);
            }
        }
    }

    return (0);
}
