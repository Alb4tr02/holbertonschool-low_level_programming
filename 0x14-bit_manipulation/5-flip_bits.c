#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits you would need
 *              to flip to get from one number to another.
 * @n: number 1.
 * @m: number 2.
 * Return: number of bits needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, a = 1, cont = 0;

	for (; i < 64; i++)
		if (((a << (63 - i)) & (n ^ m)))
			cont++;
	return (cont);
}
