#include "holberton.h"

/**
 * _memset - This fuction only concatenates two strings
 * Return: the pointer to the area memory.
 * @s:  is the pointer to the section of memory
 * @b: constant byte
 * @n: is the limit of the bytes
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
		*(s + (n - 1)) = b;
	return (s);
}
