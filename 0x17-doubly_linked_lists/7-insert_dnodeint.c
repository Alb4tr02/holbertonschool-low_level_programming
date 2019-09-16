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
	dlistint_t *new;

	if (!h && idx != 0)
		return (NULL);
	cpy = *h;
	while (cpy->prev)
		cpy = cpy->prev;
	for (; (idx > 1) && cpy; idx--, cpy = cpy->next)
		;
	if (idx == 0)
			return (add_dnodeint(h, n));
	if (idx > 1)
		return (NULL);
	if (idx == 1 && cpy)
	{
		if (!(cpy->next))
			return (add_dnodeint_end(h, n));
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		(cpy->next)->prev = new;
		new->next = (cpy->next);
		cpy->next = new;
		new->prev = cpy;
		return (new);
	}
	return (NULL);
}
