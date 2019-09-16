#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position.
 * @h: pointer to the h list.
 * @idx: new node's position.
 * @n: new node's value.
 * Return: the sum of all the data (n) of a list.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cpy = NULL;

	if (!h && idx != 0)
		return (NULL);
	cpy = *h;
	while (cpy->prev)
		cpy = cpy->prev;
	for (; idx > 0 && cpy; idx--, cpy = cpy->next)
		;
	if (idx == 0 && !h)
		return (add_dnodeint(h, n));
	if (idx == 0 && !cpy)
		return (add_dnodeint_end(h, n));
	if (idx == 0 && cpy)
	{
		dlistint_t *new = malloc(sizeof(dlistint_t));

		if (!new)
			return (NULL);
		new->n = n;
		(cpy->prev)->next = new;
		new->prev = cpy->prev;
		new->next = cpy;
		cpy->prev = new;
		return (new);
	}
	return (NULL);
}
