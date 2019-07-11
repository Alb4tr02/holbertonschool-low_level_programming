#include "holberton.h"
/**
 * _cpow - This fuction only checks if n is perfect square
 *        square root of a number.
 * @n:  is the number
 * @i: is the counter
 * Return: natural root square root of n
 */
int _cpow(int n, int i);
int _cpow(int n, int i)
{
	if (n >= 0)
	{
		if (n  >= i)
		{
			if (i * i == n)
				return (i);
			else
				return (_cpow(n, ++i));
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
	return (_cpow(n, 0));
}
