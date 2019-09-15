#include "stdio.h"
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: pointer to the head list.
 * @n: int stored in the new node..
 * Return: pointer to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new)
	{
		new->n = n;
		new->prev = NULL;
		if (head == NULL || *head == NULL)
			new->next = NULL;
		else
			new->next = *head;
		*head = new;
		return (new);
	}
	else
		return (NULL);
}
