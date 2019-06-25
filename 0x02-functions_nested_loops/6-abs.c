#include <unistd.h>
#include "holberton.h"

/**
 * _abs - prints the absolute value of a number.
 * @n: The number to test
 * Return: n if is greater than 0
 *         -n in otherwise
 */

int _abs(int n)
{
	n = n < 0 ? n * (-1) : n;
	return (n);
}
