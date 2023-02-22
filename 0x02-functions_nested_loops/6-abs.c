#include "main.h"
#include <unistd.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: integer whose absolute value is to be computed
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	int r;

	if (n > 0)
	{
		r = n;
	}
	else if (n < 0)
	{
		r = n * -1;
	}
	else
	{
		r = n;
	}
	return (r);
	write(1, "\n", 1);
}
