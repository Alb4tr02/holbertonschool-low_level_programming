#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - This fuction creates an array of integers.
 * @min: min number.
 * @max: max number
 * Return: pointer to the espace reserved.
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int *paux;
	int limit = max - min;

	if (limit < 0)
		return (NULL);
	p = malloc(sizeof(int) * (limit  + 1));
	if (p == NULL)
		return (NULL);
	paux = p;
	do {
		*(p++) = min++;
	} while (min <= max);
	return (paux);
}
