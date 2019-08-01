#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list of elements
 * Return: number of the nodes
 */
size_t print_list(const list_t *h)
{

	size_t cont = 0;

	if (h)
	{
		list_t *cpyh = h->next;

		cont++;
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		for (; cpyh != NULL; cont++)
		{
			if (cpyh->str)
				printf("[%u] %s\n", cpyh->len, cpyh->str);
			else
				printf("[0] (nil)\n");
			cpyh = cpyh->next;
		}


	}
	return (cont);
}
