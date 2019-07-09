#include "holberton.h"
#include <stddef.h>
/**
 *  _strspn - This fuction only concatenates two strings
 * Return: the pointer to the area memory.
 * @s:  is the pointer to the first occurrence of character c
 * @accept: the character to find
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int aux  = 0;
	int aux2 = 0;
	int flag = 0;
	int cont = 0;

	for (; *(s + aux) != '\0'; aux++)
	{
		flag = 0;
		for (aux2 = 0; *(accept + aux2) != '\0'; aux2++)
		{
			if (*(s + aux) == *(accept + aux2))
				flag = 1;
		}
		if (flag == 1)
			cont++;
		else
			break;
	}
	return (cont);
}
