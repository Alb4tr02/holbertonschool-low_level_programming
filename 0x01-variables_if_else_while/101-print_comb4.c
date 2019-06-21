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
	int k;

	i = 48;
	for (i = 48; i < 58; i++)
	{
		j = i + 1;
		for (; j < 58; j++)
		{
			k = j + 1;
			for (; k < 58; k++)
			{
				if (!((j == k) || (j == i) || (k == i)))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!((i == '7') && (j == '8') && (k == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
