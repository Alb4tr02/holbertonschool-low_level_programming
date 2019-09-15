#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_untilhead - print list elements starting at head until h
 * @h: pointer to the node
 * Return: nothing.
 */
void free_untilhead(dlistint_t *h)
{
	dlistint_t *cpy = NULL;

	if (h == NULL)
		return;
	while (h)
	{
		cpy = h->prev;
		free(h);
		h = cpy;
	}
}
/**
 * free_untiltail - print list elements starting at h until tail
 * @h: pointer to the node
 * Return: nothing.
 */
void free_untiltail(dlistint_t *h)
{
	dlistint_t *cpy = h;

	if (cpy == NULL)
		return;
	while (cpy)
	{
		h = cpy->next;
		free(cpy);
		cpy = h;
	}
}
/**
 * free_dlistint - function that prints all the elements of a dlistint_t list.
 * @head: pointer to the node.
 * Return: number of nodes.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cpy =  NULL;

	if (head != NULL)
	{
		cpy = head->next;
		free_untilhead(head);
		if (cpy != NULL)
			free_untiltail(cpy);
	}
}
