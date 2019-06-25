#include <unistd.h>
#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0 if all is okay.
 *
 */

void times_table(void)
{
	int res;
	int i;
	int j;
	int aux;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (res < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((res + '0'));
			}
			else
			{
				aux = res / 10;
				_putchar(' ');
				_putchar((aux + '0'));
				aux = res % 10;
				_putchar((aux + '0'));
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
