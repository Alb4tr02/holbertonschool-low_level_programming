#include "holberton.h"
#include <stdio.h>
/**
 * print_array - This fuction only prints half of a string
 * @a:  is the pointer to the array
 * @n: n is the number of integers
 *
 */

void print_array(int *a, int n)
{
	int aux = 0;

	for (; aux < n; aux++)
	{
		if (aux != n - 1)
			printf("%d, ", *(a + aux));
		else
			printf("%d", *(a + aux));
	}
	printf("\n");
}
