#include "holberton.h"

/**
 * print_number - This only check if the character is a digit
 * @n:  is the number of times the character should be printed
 *
 */

void print_number(int n)
{
	unsigned int t;
	unsigned int aux;
	int aux1;
	unsigned int aux2;
	unsigned int mns = 45;

	t = 0;
	aux =  n > 0 ? n : n * (-1);
	aux2 = 10;
	if (n < 0)
		_putchar(mns);
	n = aux;
	while (aux != 0)
	{
		aux = aux / 10;
		t++;
	}
	for (; t > 1; t--)
	{
		aux1 = t - 3;
		for (; aux1 >= 0; aux1--)
		{
			aux2 = 10 * aux2;
		}
		aux = n / aux2;
		n = n % aux2;
		_putchar(aux + '0');
		aux2 = 10;
	}
	_putchar(n + '0');
}
