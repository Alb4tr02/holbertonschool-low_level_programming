#include "holberton.h"

/**
 * puts_half - This fuction only prints half of a string
 * @str:  is the pointer to the string
 *
 */

void puts_half(char *str)
{
	int aux = 0;
	int aux2 = 0;

	for (; *(str + aux) != '\0'; aux++)
		;
	aux2 = aux - (aux / 2);
	if (aux == 1)
		aux2 = 0;
	for (; aux2 <= aux - 1; aux2++)
		_putchar(*(str + aux2));
	_putchar('\n');
}
