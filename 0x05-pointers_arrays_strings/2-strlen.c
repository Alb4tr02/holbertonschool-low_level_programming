#include "holberton.h"

/**
 * _strlen - This fuction only swaps the value of two integers
 * Return: the size of the string pointed by s.
 * @s:  is the pointer to the string
 *
 */

int _strlen(char *s)
{
	int aux = 0;

	for (; *(s + aux) != '\0'; aux++)
		;
	return (aux);
}
