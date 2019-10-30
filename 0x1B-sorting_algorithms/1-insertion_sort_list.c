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
	listint_t *r, *l, *ar, *al;

	r = l = ar = al = NULL;
	if (!list || !*list || !(*list)->next)
		return;
	r = *list;
	while (r && r->next)
	{
		if (r->n > (r->next)->n)
		{
			ar = r->next;
			al = r->prev;
			if (ar)
			{
				ar->prev = al;
				r->next = ar->next;
				ar->next = r;
			}
			r->prev = ar;
			if (al)
				al->next = ar;
			if (!al && ar)
				*list = ar;
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
