#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that function that frees a 2 dimensional
 * grid previously created
 * to a 2 dimensional array of integers.
 * @grid: pointer to the matrix
 * @height: matrix heigth
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
