#include "shell.h"

/**
 * interactive - Check if the shell is running in interactive mode.
 *
 * Inter: function checks whether the shell is running in interactive mode, which
 * is typically determined by whether it is connected to a terminal.
 *
 * Return:
 *   - 1 if running in interactive mode (connected to a terminal).
 *   - 0 if not running in interactive mode (not connected to a terminal).
 */
int inter(void)
{
	return (isatty(STDIN_FILENO));
}
