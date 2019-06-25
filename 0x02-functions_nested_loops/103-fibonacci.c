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

	long int a;
	long int b;
	long int res;
	long int sum;
	long int mod;

	a = 1;
	b = 0;
	sum = 0;
	mod = 2;
	do{
		res = a + b;
		if ((res < 4000000) && (res % mod == 0))
			sum  = sum + res;
		b = a;
		a = res;
	}while (res < 4000000);
	printf("%ld\n", sum);
	return (0);
}
