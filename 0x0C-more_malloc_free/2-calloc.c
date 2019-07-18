#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - This fuction allocates memory using malloc
 * @nmemb: number of elements.
 * @size: size in bytes of each element.
 * Return: pointer to the espace reserved.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = (char *)malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	for (nmemb = nmemb - 1; nmemb > 0; nmemb--)
		*(p + nmemb) = 0;
	*(p + nmemb) = 0;

	return (p);
}
