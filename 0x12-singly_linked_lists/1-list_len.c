#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the list of elements
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{

	size_t cont = 0;

	if (h)
	{
		list_t *cpyh = h->next;
		for (cont = 1; cpyh != NULL; cont++)
			cpyh = cpyh->next;
	}
	return (cont);
}
