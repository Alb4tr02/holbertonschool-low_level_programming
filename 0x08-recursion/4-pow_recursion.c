#include "holberton.h"

/**
 * _pow_recursion - This fuction only returns x pow y
 * @x:  is the base
 * @y: is the exponent
 * Return: x pow y
 */

int _pow_recursion(int x, int y)
{
	return ((y < 0) ? -1 : (y == 0) ? 1 : x * _pow_recursion(x, (y - 1)));
}
