#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 *                      in ascending order using the Insertion sort algorithm
 * @list: pointer to the doubly linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *r = NULL;
	listint_t *l = NULL;
	listint_t *aux = NULL;

	if (!list || !*list)
		return;
	r = *list;
	l = *list;
	while (r && r->next)
	{
		if (r->n > (r->next)->n)
		{
			aux = (r->next)->next;
			(r->next)->next = r;
			(r->next)->prev = r->prev;
			if (r->prev)
				(r->prev)->next = r->next;
			r->next = aux;
			r->prev = (r->prev)->next;
			if (aux)
				aux->prev = r;
			print_list(*list);
			for (l = r->prev; l && l->prev && (l->n < (l->prev)->n);)
			{
				aux = (l->prev)->prev;
				(l->prev)->prev = l;
				(l->next)->prev = l->prev;
				(l->prev)->next = l->next;
				l->prev = aux;
				l->next = (l->next)->prev;
				if (aux)
					aux->next = l;
				else
					*list = l;
				print_list(*list);
			}
		}
		else
			r = r->next;
	}
}
