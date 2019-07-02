#include "holberton.h"

/**
 * _puts - This fuction only prints a string
 * @str:  is the pointer to the string
 *
 */

void _puts(char *str)
{
	int aux = 0;

	for (; *(str + aux) != '\0'; aux++)
		_putchar(*(str + aux));
	_putchar('\n');
}
