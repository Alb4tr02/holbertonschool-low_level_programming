#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - This fuction allocates memory using malloc
 * @b: number of bytes.
 * Return: pointer to the espace reserved.
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p)
		exit(98);
	return (p);
}
