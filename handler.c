#include "main.h"

/**
 * handler - Signal handler function
 * @sig: The signal number
 *
 */

void handler(int sig)
{
	int number = 3;
	(void)sig;
	write(1, "\n$ ", number);
}
