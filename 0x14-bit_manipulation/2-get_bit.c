#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to extract the index.
 * @index: bit position.
 * Return: bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int  a = 1;

	if (index > 63)
		return (-1);
	return (((a << index) & n) >> index);
}
