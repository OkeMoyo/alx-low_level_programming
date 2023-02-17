#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main comment section for betty style checker */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
		printf("Last digit of n is %d and is greater than 5\n", last_digit);
	else if (n == 0)
		printf("Last digit of n is %d and is 0\n", last_digit);
	else if ((n < 6) && (n != 0))
		printf("Last digit of n is %d and is less than 6 and not 0\n", last_digit);
	/* betty style comment for return function of main */
	return (0);
}
