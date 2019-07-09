#include "holberton.h"
/**
 *  _strpbrk - This fuction only concatenates two strings
 * Return: the pointer to the area memory.
 * @s:  is the pointer to the first occurrence of character c
 * @accept: the character to find
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int aux  = 0;
	int aux2 = 0;
	char *p = 0;

	for (; *(s + aux) != '\0'; aux++)
	{
		for (aux2 = 0; *(accept + aux2) != '\0'; aux2++)
		{
			if (*(s + aux) == *(accept + aux2))
				return (s + aux);
		}
	}
	return (p);
}
