#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @list_t: the list of elements
 * Return: number of the nodes
 */
size_t print_list(const list_t *h)
{

	list_t *cpyh = h->next;
	size_t cont = 0;
	if (h)
	{
		cont++;
		if (h->str)

			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	}
	else
		return (0);
	for (; cpyh->next; cont++)
	{
		if (cpyh->str)
			printf("[%u] %s\n", cpyh->len, cpyh->str);
		else
			printf("[0] (nil)\n");
		cpyh = cpyh->next;
	}
	return (cont);
}
