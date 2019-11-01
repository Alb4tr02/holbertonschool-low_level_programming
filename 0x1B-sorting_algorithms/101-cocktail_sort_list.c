#include "sort.h"
/**
 * shake - function that change two nodes of the list
 *
 * @list: Pointer to the head of the list
 * @i: pointer to the  element
 * @mode: mode of operation
 * Return: nothing
 */
void shake(listint_t **list, listint_t *i, int mode)
{
	listint_t *r, *l, *aux;

	r = i->next;
	l = i->prev;
	if (mode == 1)
	{
		if (l)
			l->next = r;
		if (r)
		{
			aux = r->next;
			r->prev = l;
			r->next = i;
			i->prev = r;
			i->next = aux;
			if (aux)
				aux->prev = i;
			if (!(r->prev))
				*list = r;
		}
	}
	else
	{
		if (r)
			r->prev = l;
		if (l)
		{
			aux = l->prev;
			l->next = r;
			l->prev = i;
			i->prev = aux;
			i->next = l;
			if (aux)
				aux->next = i;
			if (!(i->prev))
				*list = i;
		}
	}
}
/**
 * cuba_libre - function that sorts a doubly linked list of integers
 *          in ascending order using the bubble sort algorithm
 *
 * @list: Pointer to the head of the list
 * @start: pointer to the first element
 * @end: pointer to the last element
 * Return: null if hte list is sorted
 */
listint_t *cuba_libre(listint_t **list, listint_t *start, listint_t *end)
{
	listint_t *i;
	listint_t *flag = NULL;
	int fl = 1;

	for (i = start; i != end && i->next; )
	{
		if (i->n > (i->next)->n)
		{
			shake(list, i, 1);
			fl = 0;
			print_list(*list);
		}
		else
			i = i->next;
	}
	if (!fl)
		flag = i->prev;
	return (flag);
}
/**
 * mojito - function that sorts a doubly linked list of integers
 *          in ascending order using the bubble sort algorithm
 *
 * @list: Pointer to the head of the list
 * @start: pointer to the first element
 * @end: pointer to the last element
 * Return: null if hte list is sorted
 */
listint_t *mojito(listint_t **list, listint_t *start, listint_t *end)
{
	listint_t *i;
	listint_t *flag = NULL;
	int fl = 1;

	for (i = start; i != end && i->prev;)
	{
		if (i->n < (i->prev)->n)
		{
			shake(list, i, 2);
			fl = 0;
			print_list(*list);
		}
		else
			i = i->prev;
	}
	if (!fl)
		flag = i->next;
	return (flag);
}
/**
 * cocktail_sort_list - function that sorts a doubly linked list of integers
 *               in ascending order using the Cocktail shaker sort algorithm
 *
 * @list: Pointer to the first element
 *
 * Return: nothing
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *st, *end;

	if (!list || !(*list))
		return;
	st = cuba_libre(list, *list, NULL);
	if (!st)
		return;
	end = mojito(list, st, NULL);
	while (1)
	{
		if (end)
			st = cuba_libre(list, end, st);
		else
			st = cuba_libre(list, *list, NULL);
		if (st)
			end = mojito(list, st, NULL);
		else
			return;
	}
}
