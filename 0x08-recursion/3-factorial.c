#include "holberton.h"

/**
 * factorial - This fuction only prints a  string
 * @n:  is the number
 * Return: factorial of the number n
 */

int factorial(int n)
{
	return ((n < 0) ? -1 : (n == 0) ? 1 : n * factorial(n - 1));
}
