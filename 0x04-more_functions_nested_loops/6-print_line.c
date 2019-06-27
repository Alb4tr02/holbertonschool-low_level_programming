#include "holberton.h"

/**
 * print_line - This only check if the character is a digit
 * @n:  is the number of times the character should be printed
 *
 */

void print_line(int n)
{
	int i;

	for (i = n;  i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
