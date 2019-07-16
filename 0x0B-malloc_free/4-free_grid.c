#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid -is a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @grid: matrix.
 * @height: heigth of the matrix.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	}
	else
	{
	}
	free(grid);
}
