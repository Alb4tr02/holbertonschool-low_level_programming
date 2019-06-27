#include "holberton.h"

/**
 * print_numbers - This only check if the character is a digit
 *
 * @a: the numnber to be multiplied
 * @b: the number to be multiplied
 * Return: 1 if c is a digit
 *         0 in otherwise
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
