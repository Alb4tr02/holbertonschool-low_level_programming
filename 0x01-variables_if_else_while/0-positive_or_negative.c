#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This only prints if the number is positive, negative ot zero
 *
 * Return: 0 if all is ok
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
