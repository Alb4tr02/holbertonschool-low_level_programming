#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * main - function that prints the first 50 numbers of fibbonacci.
 * Return: 0 if all is okay.
 */

int main(void)
{
	unsigned long int a1, b1, a2, b2, res1, res2;

	int i;

	a1 = 1;
	b1 = 0;
	for (i = 0; i < 98; i++)
	{
		if (i < 91)
		{
			res1 = a1  + b1;
			printf("%ld, ", res1);
			b1 = a1;
			a1 = res1;
		}
		else
		{
			if (i == 91)
			{
				a2 = a1 / 10000000000;
				a1 = a1 % 10000000000;
				b2 = b1 / 10000000000;
				b1 = b1 % 10000000000;
			}
			else
			{
				b1 = a1;
				b2 = a2;
				a1 = res1;
				a2 = res2;
			}
			res1 = (a1 + b1) % 10000000000;
			res2 = a2 + b2 + ((a1 + b1) / 10000000000);
			if (i != 97)
				printf("%ld%ld, ", res2, res1);
			else
				printf("%ld%ld\n", res2, res1);
		}
	}
	return (0);
}
