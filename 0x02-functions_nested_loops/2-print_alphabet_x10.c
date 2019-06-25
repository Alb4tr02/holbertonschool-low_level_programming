#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - This only prints the alphabetin lowercase
 *
 * Return: 0 if all is ok
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
