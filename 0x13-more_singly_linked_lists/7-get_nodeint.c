#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index  - function that returns the nth node of a listint_t
 *                linked list.
 * @head: pointer to the first node.
 * @index: node's index.
 * Return: node at index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; head && index; index--)
		head = head->next;
	if (!index)
		return (head);
	return (NULL);
}
