#include "holberton.h"

/**
 * print_rev - This fuction only prints a string
 * @s:  is the pointer to the string
 *
 */

void print_rev(char *s)
{
	int aux = 0;

	for (; *(s + aux) != '\0'; aux++)
		;
	for (aux = aux - 1; aux > -1; aux--)
		_putchar(*(s + aux));
	_putchar('\n');
}
