#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - function that prints the n times table, starting with 0.
 *
 */

void main(void)
{
	int i;
	int res;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			res = res + i;
		}
		else if ((i % 5) == 0)
		{
			res = res + i;
		}
	}
	printf("%d", res);
	return (0);
}
