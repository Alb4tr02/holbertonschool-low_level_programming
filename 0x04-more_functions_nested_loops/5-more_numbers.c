#include "holberton.h"

/**
 * more_numbers - This only check if the character is a digit
 *
 *
 */

void more_numbers(void)
{
	int i;
	int j;
	int aux;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				aux = 1;
			else
				aux = j;
			_putchar(aux + '0');
			if (j > 9)
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
