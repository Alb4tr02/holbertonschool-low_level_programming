#include "stdio.h"
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end -  function that adds a new node at the end of a list.
 * @head: pointer to the head list.
 * @n: int stored in the new node..
 * Return: pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		*head = new;
		return (new);
	}
	else
		return (NULL);
}
