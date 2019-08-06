#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  function that deletes the head node of a listint_t
 *                linked list, and returns the head node’s data (n).
 * @head: pointer to the first node.
 * Return: nothing.
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *cpy = *head;

	if (*head)
	{
		n = (*head)->n;
		free(*head);
		*head = cpy->next;
	}
	return (n);
}
