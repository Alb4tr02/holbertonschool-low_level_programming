#include "holberton.h"

/**
 * _strncpy - This fuction only concatenates two strings
 * Return: the string.
 * @dest:  is the pointer to the string
 * @src: is the pointer to the string
 * @n: is the limit to concatenate
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int aux1 = 0;

	while (*(src + aux1) != '\0' && aux1 < n)
	{
		*(dest + aux1) = *(src + aux1);
		aux1++;
	}
	for ( ; aux1 < n; aux1++)
		*(dest + aux1) = '\0';

	return (dest);
}
