#include <unistd.h>
#include "holberton.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number to test
 * Return: 1 if is lower
 *         0 in otherwise
 */

int print_sign(int n)
{
	char gtz = '+';
	char iz = '0';
	char ltz = '-';

	if (n > 0)
	{
		_putchar(gtz);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(iz);
		return (0);
	}
	else
	{
		_putchar(ltz);
		return (-1);
	}
}
