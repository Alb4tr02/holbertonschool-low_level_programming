#include <unistd.h>
#include "holberton.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: number of the table.
 *
 */

void print_times_table(int n)
{
	int res, i, j, aux, aux1, a, t;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = 0;
				res = i * j;
				aux = res;
				if (j != 0)
					_putchar(' ');
				if ((res < 100) && (j != 0))
					_putchar(' ');
				if ((res < 10) && (j != 0))
					_putchar(' ');
				while (aux != 0)
				{
					aux = aux / 10;
					t++;
				}
				for (; t > 1; t--)
				{
					for (aux1 = t - 3; aux1 >= 0; aux1--)
						a = 10 * a;
					aux = aux1 < 0 ? (res / 10) : (res / a);
					res = aux1 < 0 ? (res % 10) : (res % a);
					_putchar(aux + '0');
					a = 10;
				}
				_putchar(res + '0');
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
