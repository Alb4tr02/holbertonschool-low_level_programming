#include "holberton.h"
/**
 * cpow - This fuction only checks if n is perfect square
 *        square root of a number.
 * @n:  is the number
 * @i: is the counter
 * Return: natural root square root of n
 */

int cpow(int n, int i)
{
	if (n >= 0)
	{
		if (n / 2 >= i)
		{
			if (i * i == n)
				return (i);
			else
				return (cpow(n, (i + 1)));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - This fuction only returns the natural
 *   square root of a number.
 * @n:  is the number
  * Return: natural root square root of n
 */
int _sqrt_recursion(int n)
{
	return (cpow(n, 0));
}
