#include "holberton.h"

/**
 * infinite_add - This fuction only adds two string-numbers
 * @n1:  is the pointer to the array to sum
 * @n2: is the pointer to the array to sum
 * @r: is the pointer to the array that stores the result
 * @size_r: is the size of the array r
 * Return: the poiner to the array r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, res, car, aux, aux2, pos;

	aux2 = 0;
	pos = 0;
	car = 0;
	for (l1 = -1; n1[l1 + 1] != '\0'; l1++)
		;
	for (l2 = -1; n2[l2 + 1] != '\0'; l2++)
		;
	for (; l1 >= 0 || l2 >= 0; l1--, l2--)
	{
		if (l2 < 0)
			res = (n1[l1] - '0')  + car;
		if (l1 < 0)
			res = (n2[l2] - '0') + car;
		if (l1 >= 0 && l2 >= 0)
			res = (n1[l1] - '0') + (n2[l2] - '0') + car;
		car  = res / 10;
		aux = res % 10;
		if (aux2 == size_r - 1)
			return (0);
		for (; pos != 0 && pos < size_r - 1; pos--)
			r[pos] = r[pos - 1];
		r[0] = aux + '0';
		aux2++;
		pos = aux2;
		if (aux2 == size_r - 1)
			return (0);
	}
	if (car > 0)
	{
		for (; pos != 0 && pos < size_r - 1; pos--)
			r[pos] = r[pos - 1];
		r[0] = car + '0';
	}
	for (aux2 = aux2 + 1; aux2 < size_r; aux2++)
		r[aux2] = '\0';
	return (r);
}
