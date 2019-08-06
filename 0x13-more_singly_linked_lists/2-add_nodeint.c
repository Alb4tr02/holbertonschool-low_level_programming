#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -  function that adds a new node at the beginning of a listint_t
 *                list.
 * @head: pointer to the first node
 * @n: int element of node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new)
	{
		new->n = n;
		if (*head)
			new->next = *head;
		*head = new;
	}
	return (new);
}
