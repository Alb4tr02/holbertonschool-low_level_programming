#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns the number of elements in a
 *               linked listint_t list.
 * @h: pointer to the first list element
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
