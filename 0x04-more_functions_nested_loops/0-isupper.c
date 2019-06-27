#include "holberton.h"

/**
 * _isupper - This only check if the character is uppercase
 *
 * @c: the char to be tested
 * Return: 1 id c is uppercase
 *         0 in otherwise
 */

int _isupper(int c)
{
	return ((c > 64 && c < 91));
}
