#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *            memory, which contains a copy of the string given as a parameter
 * Return: pointer to the coy of the string
 * @str:  the pointer to the srtring created
 *
 */
char *_strdup(char *str)
{
	int aux = 0;
	char *strcpy = NULL;

	if (str)
	{
		for (; *(str + aux); aux++)
			;
		strcpy = (void *)malloc(sizeof(char) * (aux + 1));

		if (strcpy)
		{
			for (; aux >= 0; aux--)
				*(strcpy + aux) = *(str + aux);
		}
	}
	return (strcpy);
}
