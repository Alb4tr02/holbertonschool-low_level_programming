#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - This fuction only prints half of a string
 * @src:  is the pointer to the  source array
 * @dest: is the pointer to the  destiny array
 * Return: is the pointer to the string destiny
 */

char *_strcpy(char *dest, char *src)
{
	int aux = 0;

	do {
		*(dest + aux) = *(src + aux);
		aux++;
	} while (*(src + aux) != '\0');
	return (dest);
}
