#include "holberton.h"

/**
 * string_toupper - This fuction only changes all lowercase letters
 *                   of a string to uppercase.
 * @s:  is the pointer to the array
 * Return: the poiner to the array
 */

char *string_toupper(char *s)
{
	int b = 0;

	while (*(s + b) != '\0')
	{
		if (*(s + b) > 96 && *(s + b) < 123)
			*(s + b) = *(s + b) - 32;
		b++;
	}
	return (s);
}
