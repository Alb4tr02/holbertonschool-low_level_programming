#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This only prints the last digit of n
 *
 * Return: 0 if all is ok
 */

int main(void)
{
	char zero = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%c", i + zero);
	}
	printf("\n");
	return (0);
}
