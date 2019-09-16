#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * _add_dnodeint_end -  function that adds a new node at the end of a list.
 * @head: pointer to the head list.
 * @n: int stored in the new node..
 * Return: pointer to the new node.
 */
dlistint_t *_add_dnodeint_end(dlistint_t **head, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *cpy = NULL;

	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (head == NULL || *head == NULL)
		{
			new->prev = NULL;
			*head = new;
		}
		else
		{
			cpy = *head;
			while (cpy->next)
				cpy = cpy->next;
			cpy->next = new;
			new->prev = cpy;
		}
		return (new);
	}
	else
		return (NULL);
}
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
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	if (h)
	{
		cpy = *h;
		for (; idx > 0 && cpy; idx--)
			cpy = cpy->next;
		if (idx == 0 && cpy)
		{
			new->n = n;
			new->prev = cpy->prev;
			new->next =  cpy;
			(cpy->prev)->next = new;
			cpy->prev = new;
			return (new);
		}
		if (idx != 0)
			free(new);
	}
	else
	{
		if (idx == 0)
		{
			new->prev = NULL;
			new->next = NULL;
			*h = new;
			return (new);
		}
		else
			free(new);
	}
	return (NULL);
}
