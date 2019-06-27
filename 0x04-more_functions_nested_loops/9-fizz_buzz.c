#include "holberton.h"
#include <stdio.h>

/**
 * main - This only check if the character is a digit
 * Return: 0 if all it's ok.
 */

int main(void)
{
	int i;

	for (i = 1;  i <=  100; i++)
	{
		if (i % 3 == 0  || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
			{
				printf("Buzz");
				if (i != 100)
					printf(" ");
			}
			else
				printf(" ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
