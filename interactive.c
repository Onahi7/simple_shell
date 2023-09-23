#include "shell.h"

/**
 * inter: check for interactive
 *
 * Return: 1 or 0.
 */
int inter(void)
{
	return (isatty(STDIN_FILENO));
}
