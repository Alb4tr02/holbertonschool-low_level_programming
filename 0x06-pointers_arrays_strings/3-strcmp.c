#include "holberton.h"

/**
 * _strcmp - This fuction only concatenates two strings
 * Return: the string.
 * @s1:  is the pointer to the string
 * @s2: is the pointer to the string
 *
 */

int _strcmp(char *s1, char *s2)
{
       	int a = 0;
	int aux = 0;

        while (*(s1 + a) != '\0' && *(s2 + a) != '\0')
      	{
		aux = *(s1 + a) - *(s2 + a);
		if ( aux != 0)
			return (aux);
		a++;
	}
        return (*(s1+ a) - *(s2 + a));
}
