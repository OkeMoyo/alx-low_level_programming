#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n - starting number
 * Return: numbers from n to 98
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		write(1, "n", 1);
		n++;
	}
	while (n >= 98)
	{
		write(1, "n", 1);
		n--;
	}
	write(1, "\n", 1);
}
