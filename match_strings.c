#include "shell.h"

/**
 * match_strings - Check if two strings match exactly
 * @s1: First string 
 * @s2: Second string
 *
 * Compares string s1 and s2 character by character.
 * Returns 0 if all characters match.
 * Returns difference of first non-matching character otherwise.
*/

int match_strings(char *s1, char *s2) 
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}
