#include "holberton.h"

/**
 * _puts_recursion - This fuction only prints a  string
 * @s:  is the pointer to the string
 *
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*(s));
		_puts_recursion((s + 1));
	}
}
