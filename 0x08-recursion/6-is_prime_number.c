#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number
 * @n: the input integer
 * Return: 1 if prime
 */

int is_prime_number(int n)
{
	if (n % 1 == 0 && n % n == 0)
		return (1);
	else
		return (0);
}
