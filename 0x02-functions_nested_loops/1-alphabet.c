#include <unistd.h>
#include "holberton.h"

/**
 * main - This only prints the alphabetin lowercase
 *
 * Return: 0 if all is ok
 */

void print_alphabet(void)
{
	char letter;
	char nwline;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
