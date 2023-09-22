#include "shell.h"

/** 
 * str_size - Get the size of a string
 * @str: String to get size of 
 *
 * Returns number of characters in string excluding
 * null terminator.
*/

int str_size(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

