#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the  number.
 * @index: bit position.
 * Return: 1 if succes or -1 if fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int  a = 1;

	if (index > 63)
		return (-1);
	*n = (*n | (a << index));
	return (1);
}
