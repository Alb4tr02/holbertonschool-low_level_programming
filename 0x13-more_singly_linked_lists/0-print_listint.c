#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the first list element
 *
 * Return: number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
