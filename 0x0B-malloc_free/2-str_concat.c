#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - function that char *str_concat(char *s1, char *s2)
 * Return: pointer to the new string concatenated
 * @s1: the pointer to the srtring
 * @s2: the pointer to the srtring
 */
char *str_concat(char *s1, char *s2)
{
	int aux1 = 0;
	int aux2 = 0;
	int i = 0;
	char *strcpy = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 && s2)
	{
		for (; *(s1 + aux1); aux1++)
			;
		for (; *(s2 + aux2); aux2++)
			;
		strcpy = (void *)malloc(sizeof(char) * (aux1 + aux2 + 1));

		if (strcpy)
		{
			for (; i < aux1; i++)
				*(strcpy + i) = *(s1 + i);
			for (i = 0; i <= aux2; i++, aux1++)
				*(strcpy + aux1) = *(s2 + i);
		}
	}
	return (strcpy);
}
