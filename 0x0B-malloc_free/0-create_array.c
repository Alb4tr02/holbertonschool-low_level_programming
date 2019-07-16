#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - This fuction only print its program name
 * Return: pointer to the arreay created.
 * @c:  the char to inicialize the array
 * @size: size of the array
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ch = NULL;
	void *p = malloc(sizeof(char) * size);

	if (size != 0)
	{
		if (p)
		{
			ch = (char *)p;
			for (; size > 0; size--)
				*(ch + size) = c;
			*(ch + size) = c;
		}
	}
	return (ch);
}
