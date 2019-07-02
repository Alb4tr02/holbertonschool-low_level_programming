#include "holberton.h"

/**
 * puts2 - This fuction only prints a string
 * @str:  is the pointer to the string
 *
 */

void puts2(char *str)
{
	int aux = 0;
	int aux2 = 0;

	for (; *(str + aux) != '\0'; aux++)
		;
	for (; aux2 < aux; aux2 += 2)
		_putchar(*(str + aux2));
	_putchar('\n');
}
