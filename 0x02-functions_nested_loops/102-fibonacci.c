#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * main - function that prints the first 50 numbers of fibbonacci.
 * Return: 0 if all is okay.
 */

int main(void)
{
	int i;

	long double a;
	long double b;
	long double res;

	a = 1;
	b = 0;
	for (i = 0; i < 50; i++)
	{
		res = a + b;
		if (i != 49)
			printf("%0.Lf, ", res);
		else
			printf("%0.Lf\n", res);
		b = a;
		a = res;
	}
	return (0);
}
