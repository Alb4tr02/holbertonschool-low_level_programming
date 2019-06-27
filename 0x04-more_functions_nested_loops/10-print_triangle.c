#include "holberton.h"

/**
 * print_triangle - This only check if the character is a digit
 * @size:  is the number of times the character should be printed
 *
 */

void print_triangle(int size)
{
	int i;
        int j;
	int k;

        i = 0;
	for (; i < size; i++)
	{
		for (j = 0; j < size  - i -1; j++)
			_putchar(' ');
		for (k = size - i; k <= size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
