#include "main.h"
#include <unistd.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: alphabetic character to be checked
 * Return: 1 if letter is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	int r;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		r = c / c;
	}
	else
	{
		r = c * 0;
	}
	write(1, "\n", 1);
	return (r);
}
