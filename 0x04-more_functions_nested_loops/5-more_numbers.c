#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * more_numbers - prints digits 0 to 14
 */

void more_numbers(void)
{
	int n;
	int i;

	i = 1;
	while (i <= 10)
	{
		n = 0;

		while (n < 15)
		{
			printf("%d", n);
			n++;
		}
		printf("\n");
		i++;
	}
}
