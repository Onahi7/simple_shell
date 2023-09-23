#include "shell.h"
#include <stdio.h>

/**
 * string_to_int - converts string to integer
 * @string: pointer to string
 *
 * Return: converted integer
 */
int string_to_int(char *str)
{
	unsigned long int num = 0;
	int i = 0;

	if (str[0] != '+')
	{
	}
	else
	{
		str++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
			if (num > INT_MAX)
			{
				return (-1);
			}
			i++;
		}
		else
		{
			return (-1);
		}
	}
	return (num);
}
