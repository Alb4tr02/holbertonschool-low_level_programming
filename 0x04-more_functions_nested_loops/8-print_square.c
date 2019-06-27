#include "holberton.h"

/**
 * print_square - This only check if the character is a digit
 * @n:  is the number of times the character should be printed
 *
 */

void print_square(int n)
{
	int i;
	int j;

	i = n;
	for (; n > 0; n--)
	{
		for (j = 0; j < i; j++)
			_putchar('#');
		if (n != 1)
			_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
