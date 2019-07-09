#include "holberton.h"

/**
 * _memcpy - This fuction only concatenates two strings
 * Return: the pointer to the area memory.
 * @dest:  is the pointer to the section of memory destiny
 * @src: is the pointer to the section of memory source
 * @n: is the limit of the bytes
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
		*(dest + (n - 1)) = *(src + (n - 1));
	return (dest);
}
