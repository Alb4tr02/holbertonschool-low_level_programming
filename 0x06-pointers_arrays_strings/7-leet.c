#include "holberton.h"

/**
 * leet - This fuction only changes all lowercase letters
 *                   of a string to uppercase.
 * @s:  is the pointer to the array
 * Return: the poiner to the array
 */

char *leet(char *s)
{
	int b = 0;
	int i;
	int arr[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int rep[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (*(s + b) != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (s[b] == arr[i])
				s[b] = rep[i];
		}
		b++;
	}
	return (s);
}
