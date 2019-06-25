#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: number of the table.
 *
 */

void print_times_table(int n)
{
	int res, i, j, aux, aux1, t, aux2;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j != 0)
					_putchar(' ');
				if ((res < 100) && (j != 0))
					_putchar(' ');
				if ((res < 10) && (j != 0))
					_putchar(' ');
				t = 0;
				aux = res;
				aux2 = 10;
				while (aux != 0)
				{
					aux = aux / 10;
					t++;
				}
				for (; t > 1; t--)
				{
					aux1 = t - 3;
					for (; aux1 >= 0; aux1--)
						aux2 = 10 * aux2;
					aux = res / aux2;
					res = res % aux2;
					_putchar(aux + '0');
					aux2 = 10;
				}
				_putchar(res + '0');
			}
			_putchar('\n');
		}
	}
}
