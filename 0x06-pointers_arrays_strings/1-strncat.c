#include "holberton.h"

/**
 * _strncat - This fuction only concatenates two strings
 * Return: the string.
 * @dest:  is the pointer to the string
 * @src: is the pointer to the string
 * @n: is the limit to concatenate
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int aux = 0;
	int aux1 = 0;

	for (; *(dest + aux) != '\0'; aux++)
		;
	while (*(src + aux1) != '\0' && aux1 < n)
	{
		*(dest + aux) = *(src + aux1);
		aux1++;
		aux++;
	}
	return (dest);
}
