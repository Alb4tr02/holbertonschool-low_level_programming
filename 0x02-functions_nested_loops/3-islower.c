#include <unistd.h>
#include "holberton.h"

/**
 * _islower - This only prints the alphabetin lowercase
 * @c: The character to test
 * Return: 1 if is lower
 *         0 in otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
