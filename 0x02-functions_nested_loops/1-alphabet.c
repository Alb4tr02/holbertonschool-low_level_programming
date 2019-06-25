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

	nwline = '\n';
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		write(1, &letter, 1);
	}
	write(1, &nwline, 1);
}
