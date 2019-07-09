#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - This fuction only concatenates two strings
 * Return: the pointer to the area memory.
 * @s:  is the pointer to the first occurrence of character c
 * @c: the character to find
 *
 */

char *_strchr(char *s, char c)
{
	int aux  = 0;
	char *p = NULL;

	for (; *(s + aux) != '\0'; aux++)
	{
		if (*(s + aux) == c)
		{
			p = (s + aux);
			break;
		}
	}
	return (p);
}
