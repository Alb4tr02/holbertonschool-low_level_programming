#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * Return: pointer to the array
 * @width: matrix  width
 * @height: matrix heigth
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **m = NULL;
	int *p = NULL;

	m = (int **) malloc(sizeof(int *) * height);

	if (m && width > 0  && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			p = (int *)malloc(sizeof(int) * width);
			if (p)
				*(m + i) = p;
			else
			{
				m = NULL;
				return (m);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; width++)
				*(*(m + i) + j) = 0;
		}
	}
	return (m);
}
