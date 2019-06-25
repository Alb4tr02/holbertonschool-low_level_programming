#include "holberton.h"
#include <stdio.h>
/**
 * main - function that prints the sum.
 *
 */

int main(void)
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
