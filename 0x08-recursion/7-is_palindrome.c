#include "holberton.h"

/**
 * sl - This fuction only return the length of a  string
 * @s:  is the pointer to the string
 * Return: the lenght of the string
 */

int sl(char *s)
{
	return ((*s == 0) ? 0 : (1 + sl((s + 1))));
}

/**
 * f1 - This fuction only return the substraction of the characters
 * @l: is the lenght of the string
 * @i: the first position of the string
 * @s: pointer to the string
 * @j: 1 if l is odd or 2 if is even
 * Return: 0 if the string is palinrome
 */

int f1(int l, char *s, int i, int j)
{
	if (l == j)
		return (0);
	else
		return ((*(s + l) - *(s + i)) == 0) ?
			0 + f1((l - 1), s, (i + 1), j)
			: 1 + f1((l - 1), s, (i + 1), j);
}

/**
 * is_palindrome - This fuction only say if the string is palindrome
 * @s:  is the pointer to the string
 * Return: 1 if is aplindrome, 0 in otherwise
 */

int is_palindrome(char *s)
{
	if ((sl(s) - 1)  <= 0)
		return (1);
	if ((f1((sl(s) - 1), s, 0, ((sl(s) - 1) / 2)) == 0))
		return (1);
	else
		return (0);
}
