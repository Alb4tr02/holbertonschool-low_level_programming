#include "holberton.h"

/**
 * print_chessboard - This fuction only concatenates two strings
 * @a:  is the pointer to the section of memory
 *
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
