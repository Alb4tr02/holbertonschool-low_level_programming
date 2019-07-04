#include "holberton.h"

/**
 * rot13 - This fuction only changes all lowercase letters
 *                   of a string to uppercase.
 * @s:  is the pointer to the array
 * Return: the poiner to the array
 */

char *rot13(char *s)
{
	int b = 0;
	int i = 0;
	int flag = 1;
	char *p = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *r = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + b) != '\0')
	{
		while (*(p + i) != '\0' && (flag == 1))
		{
			if (*(s + b) == *(p + i))
			{
				*(s + b) = *(r + i);
				flag = 0;
			}
			i++;
		}
		flag = 1;
		i = 0;
		b++;
	}
	return (s);
}
