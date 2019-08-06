#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  function that frees a listint_t list.
 * @head: pointer to the first node.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *cpy = head;

	while (cpy)
	{
		free (cpy);
		cpy = head->next;
		head = head->next;
	}
}
