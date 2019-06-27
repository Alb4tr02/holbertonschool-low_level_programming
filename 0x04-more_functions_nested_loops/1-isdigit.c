#include "holberton.h"

/**
 * _isdigit - This only check if the character is a digit
 *
 * @c: the char to be tested
 * Return: 1 if c is a digit
 *         0 in otherwise
 */

int _isdigit(int c)
{
        return ((c > 47 && c < 58));
}
