#include "holberton.h"

/**
 * _puts - This fuction only prints a string
 * @str:  is the pointer to the string
 *
 */

void _puts(char *str)
{
	int aux = 0;

	for (; *(s + aux) != '\0'; aux++)
		_putchar(*(s + aux));
	_puthcar('\n');
}
