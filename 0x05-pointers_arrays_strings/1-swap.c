#include "holberton.h"

/**
 * swap_int - This fuction only swaps the value of two integers
 * @a:  is the pointer to the integer a
 * @b: is the pointer to the integer b
 *
 */

void swap_int(int *a, int *b)
{
	int aux =  *a;

	*a = *b;
	*b = aux;
}
