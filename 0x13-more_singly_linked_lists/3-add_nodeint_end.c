#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end -  function that adds a new node at the end of a listint_t
 *                list.
 * @head: pointer to the first node
 * @n: int element of node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *cpy = *head;

	if (new)
	{
		new->n = n;
		new->next = NULL;
		while (cpy && cpy->next)
			cpy = cpy->next;
		if (cpy)
			cpy->next = new;
		else
			*head = new;
	}
	return (new);
}
