#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: The number to start.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98");
	printf("\n");
}
