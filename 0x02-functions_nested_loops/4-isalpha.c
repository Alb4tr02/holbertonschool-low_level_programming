#include <unistd.h>
#include "holberton.h"

/**
 * _isalpha - This only prints the alphabetin lowercase
 * @c: The character to test
 * Return: 1 if is lower
 *         0 in otherwise
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
