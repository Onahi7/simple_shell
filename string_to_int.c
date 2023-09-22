#include "shell.h"
#include <stdio.h>

/**
 * string_to_int - Converts a string to an integer 
 * @str: The string to convert
 * 
 * Parses the given @str and converts it to an 
 * integer value. Handles positive/negative signs.
 * 
 * Returns: The converted integer, or -1 on error.
*/
int string_to_int(char *str) 
{
  unsigned long int num = 0;
  int i = 0;

  if (str[0] == '+') {
    str++; 
  }

  while (str[i] != '\0') {
    if (str[i] >= '0' && str[i] <= '9') {
      num = num * 10 + (str[i] - '0');
      if (num > INT_MAX) return -1;
      i++;
    }
    else {
      return -1;
    }
  }

  return num;
}
