#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int flag = 0, i = 0, a = 1, p;

	for (; i < 64; i++)
	{
		p = ((a << (63 - i)) & n);
		if (p >> (63 - i))
			flag = 1;
		if (flag)
			_putchar((p >> (63 - i)) + 48);
	}
	if (!n)
		_putchar('0');
}
