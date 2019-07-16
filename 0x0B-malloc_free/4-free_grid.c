#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * free_grid - function that function that frees a 2 dimensional
 * grid previously created
 * to a 2 dimensional array of integers.
 * @grid: pointer to the matrix
 * @height: matrix heigth
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(*(grid + k));
	free(grid);
}
