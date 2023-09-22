#include "shell.h"

/**
 * join_strings - Join two strings together 
 * @dest: Destination string
 * @src: Source string to append to dest
 *
 */

void join_strings(char *destination, const char *src)
{
	int len = 0, i = 0;

	while (destination[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		destination[len] = src[i];
		i++;
		len++;
	}
	destination[len] = '\0';
}
