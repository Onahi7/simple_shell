#include "shell.h"

/**
 * find_char - Find first occurrence of a character in string
 * @s: Pointer to string to search
 * @c: Character to find
 *
 * Return: pointer to first instance of c in s,
 * or NULL if character not found.
*/

char *find_char(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
	{
		return (s + i);
	}
	else
		return (NULL);
}
