#include "holberton.h"

/**
 * print_last_digit - prints the last digit of  a number.
 * @n: The number to test
 * Return: n if is greater than 0
 *         -n in otherwise
 */

int print_last_digit(int n)
{
	int ld;

	n = n < 0 ? n * (-1) : n;
	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}
