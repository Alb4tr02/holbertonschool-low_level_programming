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
int i, j, k, l, a, b;

i = j = k = l = a = b = 0;
for (; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		for (; k < 10; k++)
		{
			if (k == 0)
				l = j;
			else
				l = 0;
			for (; l < 10; l++)
			{
				a = (i * 10) + j;
				b = (k * 10) + l;
				if (!((i == k) && (j == l)) && (a < b))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (!((i + '0' == '9')
					      && (j + '0' == '8')
					      && (k + '0' == '9')
					      && (l + '0' == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		k = 0;
	}
}
putchar('\n');
return (0);
}
