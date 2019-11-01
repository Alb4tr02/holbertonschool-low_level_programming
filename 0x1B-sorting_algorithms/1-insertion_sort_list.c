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
	listint_t *r, *l, *ar, *al, *aux;

	if (!list || !(*list) || !(*list)->next)
		return;
	r = *list;
	for (ar = r->next, al = r->prev; r && r->next; ar = r->next, al = r->prev)
	{
		if (r->n > (r->next)->n)
		{
			if (al)
				al->next = ar;
			if (ar)
			{
				aux = ar->next;
				ar->prev = al;
				ar->next = r;
				r->prev = ar;
				r->next = aux;
				if (aux)
					aux->prev = r;
				if (!(ar->prev))
					*list = ar;
			}
			print_list(*list);
			for (l = r->prev; l && l->prev && (l->n < (l->prev)->n);)
			{
				al = (l->prev)->prev, (l->prev)->prev = l;
				(l->next)->prev = l->prev, (l->prev)->next = l->next;
				l->prev = al;
				l->next = (l->next)->prev;
				if (al)
					al->next = l;
				else
					*list = l;
				print_list(*list);
			}
		}
		else
			r = r->next;
	}
}
