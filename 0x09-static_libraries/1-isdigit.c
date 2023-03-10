#include "main.h"
#include <unistd.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	int retval;

	if (c >= 48 && c <= 57)
	{
		retval = (c * 0) + 1;
	}
	else
	{
		retval = c * 0;
	}
	return (retval);
	write(1, "\n", 1);
}
