#include <unistd.h>
#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: 0 if all is okay.
 *
 */

void jack_bauer(void)
{
	int h;
	int m;
	int aux;

	h = 0;
	m = 0;
	aux = '0';
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar((h + '0'));
			}
			else
			{
				aux = h / 10;
				_putchar((aux + '0'));
				aux = h % 10;
				_putchar((aux + '0'));
			}
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar((m + '0'));
			}
			else
			{
				aux = m / 10;
				_putchar((aux + '0'));
				aux = m % 10;
				_putchar((aux + '0'));
			}
			_putchar('\n');
		}
	}
}
