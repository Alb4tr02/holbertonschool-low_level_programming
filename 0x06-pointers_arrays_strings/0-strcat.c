#include "holberton.h"

/**
 * _strcat - This fuction only concatenates two strings
 * Return: the string.
 * @dest:  is the pointer to the string
 * @src: is the pointer to the string
 *
 */

char *_strcat(char *dest, char *src)
{
	int aux = 0;
	int aux1 = 0;

	for (; *(dest + aux) != '\0'; aux++)
		;
	while (*(src + aux1) != '\0')
	{
		*(dest + aux) = *(src + aux1);
		aux1++;
		aux++;
	}
	return (dest);
}
