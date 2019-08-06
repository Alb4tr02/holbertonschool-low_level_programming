#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  function that frees a listint_t list and sets head to NULL.
 * @head: pointer to the first node.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *cpy = *head;

	while (cpy)
	{
		free(cpy);
		cpy = (*head)->next;
		*head = (*head)->next;
	}
}
