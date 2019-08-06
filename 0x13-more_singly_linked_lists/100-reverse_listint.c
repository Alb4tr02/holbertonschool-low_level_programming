#include "lists.h"
#include <stdlib.h>
/**
 * cl - function that counts number of nodes
 * @head: pointer to the first node.
 * Return: number of nodes.
 */

int cl(listint_t *head)
{
	if (head)
		return (1 + cl(head->next));
	else
		return (0);
}
/**
 * fi - function that find a node in the index position
 * @head: pointer to the first node.
 * @index: position of the node.
 * Return: node at index position.
 */

listint_t *fi(listint_t *head, int index)
{
	if (index == 0)
		return (head);
	else
		return (fi(head->next, index - 1));
}
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to the first node.
 * Return: pointer to the head.
 */

listint_t *reverse_listint(listint_t **head)
{
	int cpy;
	int i = 0;

	if (head && *head)
	{
		for (; i < (cl(*head) / 2); i++)
		{
			cpy = (fi(*head, i))->n;
			(fi(*head, i))->n = (fi(*head, cl(*head) - i - 1))->n;
			(fi(*head, cl(*head) - i - 1))->n = cpy;
		}
	}
	return (*head);
}
