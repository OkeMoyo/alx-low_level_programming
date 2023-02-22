#include "main.h"
#include <unistd.h>
/**
 * _islower - checks if the character is lower case
 */
int _islower(int c)
{
	int retval;

	if (c >= 97 && c <= 122)
	{
		retval = (c * 0) + 1;
	}
	else
	{
		retval = c * 0;
	}

	write(1, "\n", 1);
	return retval;
}
