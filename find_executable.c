#include "shell.h"

/**
 * find_exec - find the path for given executable argument
 * @executable: the executable given
 * @fullpath: the fullpath for executable
 *
 * Return: fullpath to the executable
 */

char *find_exec(char *executable, char *fullpath)
{
	char *path, *copy, *token;
	struct stat store;

	if (executable == NULL || *executable == '\0')
	{
		return (NULL);
	}
	path = getenv("PATH");
	if (path == NULL)
	{
		return (NULL);
	}
	copy = _strdup(path);
	if (copy == NULL)
	{
		return (NULL);
	}
	token = _strtok(copy, ":");
	while (token != NULL)
	{
		_strcpy(fullpath, token);
		_strcat(fullpath, "/");
		_strcat(fullpath, executable);
		if (stat(fullpath, &store) == 0 && access(fullpath, X_OK) == 0)
		{
			free(copy);
			return (fullpath);
		}
		if (stat(fullpath, &store) == 0 && access(fullpath, X_OK) == -1)
		{
			free(copy);
			write(1, executable, _strlen(executable));
			write(1, ": No such file or directory\n", 28);
			return (NULL);
		}
		token = _strtok(NULL, ":");
	}
	free(copy);
	return (NULL);
}
