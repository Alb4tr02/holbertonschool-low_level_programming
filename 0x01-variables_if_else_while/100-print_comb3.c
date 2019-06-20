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
	int i;
	int j;
	int aux;

	j = 48;
	aux = 0;
	for (i = 48; i < 58; i++)
	{
		for (j = j + aux ; j < 58; j++)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);
				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		j = 48;
		aux++;
	}
	putchar('\n');
	return (0);
}
