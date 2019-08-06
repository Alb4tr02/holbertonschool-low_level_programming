#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 *                           listint_t linked list.
 * @head: pointer to the first node.
 * @index: position to add the new node.
 * Return: pointer to the new node.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hcpy = *head;
	listint_t *aux;

	if (head && *head)
	{
		for (; hcpy && (index > 1); index--)
			hcpy = hcpy->next;
		if (index > 1)
			return (-1);
		if (index == 0)
		{
			hcpy = (*head)->next;
			free(*head);
			*head = hcpy;
			return (1);
		}
		else
		{
			aux = hcpy->next;
			hcpy->next = aux->next;
			free(aux);
			return (1);
		}
	}
	return (-1);
}
