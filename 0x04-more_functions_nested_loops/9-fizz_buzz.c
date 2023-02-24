#include <stdio.h>

/**
 * main - solves the fizzbuzz question
 * Return: 0 to 100 with special multiples
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i != 100)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
