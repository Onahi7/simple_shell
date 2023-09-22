#include "shell.h"

/**
 * string_clone - Clone a string to newly allocated memory
 * @str: String to be cloned
 *
 * Allocates memory for a copy of the string, copies 
 * the characters to the new memory, and returns the 
 * pointer to the cloned string.
 * Returns NULL if insufficient memory.
*/

char *string_clone(char *str)
{
	int length = 0, i = 0;
	char *new_string;

	if (string == NULL)
	{
		return (NULL);
	}
	while (string[length] != '\0')
	{
		length++;
	}
	new_string = (char *)malloc(length + 1);

	if (new_string == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		new_string[i] = string[i];
		i++;
	}

	new_string[length] = '\0';
	return (new_string);
}
