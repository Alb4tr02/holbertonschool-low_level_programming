#include "holberton.h"

/**
 * cap_string - This fuction only changes all lowercase letters
 *                   of a string to uppercase.
 * @s:  is the pointer to the array
 * Return: the poiner to the array
 */

char *cap_string(char *s)
{
	int b = 1;
	int flag = 0;
	int i;
	int arr[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (*(s + b) != '\0')
	{
		if (s[b] == 9)
			s[b] = 32;
		for (i = 0; i < 13; i++)
			flag = (s[b - 1] == arr[i]) ? 1 : flag;
		if (s[b] > 96 && s[b] < 123 && (flag == 1))
			s[b] = s[b] - 32;
		flag = 0;
		b++;
	}
	return (s);
}
