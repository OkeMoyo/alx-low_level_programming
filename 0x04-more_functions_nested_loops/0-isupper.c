#include "main.h"
#include <unistd.h>
/**
 * _isupper - checks if a character is uppercase
 * @c: character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int retval;

	if (c >= 65 && c <= 90)
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
