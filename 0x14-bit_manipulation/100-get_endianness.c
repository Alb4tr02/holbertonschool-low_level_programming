#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 1 if is little endian or 0 if is big endian.
 */
int get_endianness(void)
{
	return ((1 >> 1) ? 0 : 1);
}
