#include "holberton.h"

/**
 * rev_string - This fuction only prints a string
 * @s:  is the pointer to the string
 *
 */

void rev_string(char *s)
{
	int aux = 0;
	int aux2 = 0;
	int stop;
	char aux1;

	for (; *(s + aux) != '\0'; aux++)
		;
	aux--;
	stop = aux / 2;
	for (; aux2 <= stop; aux--)
	{
		aux1 = *(s + aux);
		*(s + aux) = *(s + aux2);
		*(s + aux2) = aux1;
		aux2++;
	}
}
