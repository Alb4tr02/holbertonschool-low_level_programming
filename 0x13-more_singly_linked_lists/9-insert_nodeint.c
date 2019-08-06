#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a
 *               given position
 * @head: pointer to the first node.
 * @idx: position to add the new node.
 * @n: content of the new node.
 * Return: pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *hcpy = *head;

	if (new)
	{
		new->n = n;
		for (; hcpy && (idx > 1); idx--)
			hcpy = hcpy->next;
		if (hcpy == *head)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			new->next = hcpy->next;
			hcpy->next = new;
		}
	}
	return (new);
}
