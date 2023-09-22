#include "shell.h"

/**
 * copy_string - Copy a string 
 * @dest: Destination buffer for copied string
 * @src: Source string to copy
 *
 * Copies the source string into the destination 
 * buffer. Includes the null terminator.
 * Destination buffer must be large enough to hold
 * the entire source string.
*/

void copy_string(char *dest, char *src)
{
	int length = 0, counter = 0;

	while (source[length] != '\0')
	{
		length++;
	}

	while (counter < length)
	{
		destination[counter] = source[counter];
		counter++;
	}
	destination[counter] = '\0';

}
