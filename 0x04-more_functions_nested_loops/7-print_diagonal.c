#include "holberton.h"

/**
 * print_diagonal - This only check if the character is a digit
 * @n:  is the number of times the character should be printed
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	i = 0;
	for (; n > 0; n--)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar(92);
		if (n != 1)
			_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
