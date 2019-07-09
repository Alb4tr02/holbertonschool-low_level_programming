#include "holberton.h"
#include <stdio.h>
/**
 *  _strstr -  function that locates a substring.
 * Return: the pointer to the area memory.
 * @haystack:  is the pointer to the first occurrence of character c
 * @needle: the character to find
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int aux  = 0;
	int aux2 = 0;
	int flag = 0;
	int aux3;

	if (needle[0] == '\0')
		return (haystack);
	for (; *(haystack + aux) != '\0'; aux++)
	{
		flag = 0;
		if (*(haystack + aux) == *(needle + 0))
		{
			aux3 = aux;
			if (*(needle + 1) == '\0')
				return (haystack + aux);
			aux++;
			for (aux2 = 1; *(needle + aux2) != '\0'; aux2++, aux++)
			{
				if (!(*(haystack + aux) == *(needle + aux2)))
				{
					aux--;
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				return (haystack + aux3);
		}
	}
	return (0);
}
