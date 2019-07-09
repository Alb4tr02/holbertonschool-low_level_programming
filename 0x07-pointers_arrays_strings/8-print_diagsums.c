#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - This fuction only  prints the sum of the two
 *                  diagonals of a square matrix of integers.
 * @a:  is the pointer to the section of memory
 * @size: is the size of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int res1 = 0;
	int res2 = 0;

	for (i = 0; i < size; i++)
		res1 = res1 + *(a + (i * size) + i);
	for (i = 0; i < size; i++)
		res2 = res2 + *(a + ((i + 1) * size) - i - 1);
	printf("%d, %d \n", res1, res2);
}
