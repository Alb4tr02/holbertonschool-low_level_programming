#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * count_words - function that count words in a string
 * separated by a blank space
 * Return: number of words in the string
 * @str: pointer to the string
 */
int count_words(char *str)
{
	int words = 0;
	int flagbs = 0;
	int i = 0;

	while (*(str + i))
	{
		if ((*(str + i) == ' ' || *(str + i + 1) == 0) && flagbs)
		{
			flagbs = 0;
			words++;
		}
		if (*(str + i) != ' ')
			flagbs = 1;
		i++;
	}
	if (*(str + i - 1) != ' ' && *(str + i - 2) == ' ')
		words++;
	if (i == 1 && *str != ' ')
		words++;
	return (words);
}
/**
 * look_pos - function that stores the begining and the end position of a word
 * in a string
 * @str: pointer to the string
 * @pos: pointer ti the array used to store the positions
 */

void look_pos(char *str, int *pos)
{
	int flagw = 1;
	int k = 0;
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) != ' '  && *(str + i + 1) == 0 && flagw)
		{
			*(pos + k) = i;
			*(pos + k + 1) = i;
		}
		if (*(str + i) != ' ' && *(str + i) != 0 && flagw)
		{
			flagw = 0;
			*(pos + k) = i;
			k++;
		}
		if (*(str + i + 1) == 0 && (flagw == 0))
			*(pos + k) = i;
		if (*(str + i + 1) == ' ' && *(str + i) != ' ')
		{
			*(pos + k) = i;
			k++;
		}
		if (*(str + i) == ' ')
			flagw = 1;
		i++;
	}
}
/**
 * strtow - function that returns a pointer to an array of strings (words)
 * Return: pointer to the array
 * @str: pointer to the array
 */
char **strtow(char *str)
{
	int words = 0;
	int b = 0;
	int l = 0;
	char **m = NULL;

	words = count_words(str);
	m = (char **) malloc((sizeof(char *) * words) + 1);

	int *pos = NULL;

	pos = (int *)malloc(sizeof(int) * words * 2);

	look_pos(str, pos);

	int b1 = 0;

	for (b = 0; b < words; b++)
	{
		int p1 = *(pos + b1);
		int p2 = *(pos + b1 + 1);
		int sz = p2 - p1 + 2;
		*(m + b) = (char *)malloc(sizeof(char) * (sz));

		for (l = 0; l < sz - 1; l++, p1++)
			*(*(m + b) + l) = *(str + p1);
		*(*(m + b) + l) = '\0';
				b1 = b1 + 2;
	}
	*(m + b) = NULL;
	return (m);
}
