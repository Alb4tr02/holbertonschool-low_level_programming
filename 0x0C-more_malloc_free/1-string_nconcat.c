#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - This fuction only concatenates two strings.
 * @s1:  is the pointer to the string 1
 * @s2:  is the pointer to the string 2
 * @n: the number of characters of s2 that will be copied
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int naux;
	unsigned int i, j;

	if (s1 == NULL)
		*s1 = 0;
	if (s2 == NULL)
		*s2 = 0;
	naux = sizeof(s2);

	if (n >= naux)
		p = (char *)malloc(sizeof(s1) + naux - 1);
	else
	{
		p = malloc(sizeof(s1) + n);
		naux = n;
	}
	if (!p)
		return (NULL);
	i = 0;
	for (; *(s1 + i); i++)
		*(p + i) = *(s1 + i);
	j = 0;
	for (; *(s2 + j) && (j < naux); j++, i++)
		*(p + i) = *(s2 + j);
	if (*(s2 + j))
		*(p + i) = 0;
	else
		*(p + i) = *(s2 + j);
	return (p);
}
