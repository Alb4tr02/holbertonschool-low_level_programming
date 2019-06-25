#include "holberton.h"

/**
 * print_last_digit - prints the last digit of  a number.
 * @n: The number to test
 * Return: n if is greater than 0
 *         -n in otherwise
 */

int print_last_digit(int n)
{

	n = n % 10;
	n = n < 0 ? n * (-1) : n;
	_putchar(n + '0');
	return (n);
}
