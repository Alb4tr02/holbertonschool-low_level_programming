#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees the list
 * @head: pointer to the first node.
 * Return: nothing
 */
void free_list(listn_t **head)
{

	listn_t *cpy;

	while (head && *head)
	{
		cpy = (*head)->next;
		free(*head);
		*head = cpy;
	}
}
/**
 * add_n - function that add a node at the beginning
 * @head: pointer to the first node.
 * @node: node to be added
 * Return: nothing
 */

int add_n(listn_t **head, listint_t *node)
{
	listn_t *new = malloc(sizeof(listn_t));

	if (new)
	{
		new->node = node;
		if (*head)
			new->next = *head;
		else
			new->next = NULL;
		*head = new;
	}
	else
		return (0);
	return (1);
}
/**
 * find - function that check if a node was printed previously
 * @head: pointer to the first node.
 * @node: node to be checked
 * Return: 1 if exits, 0 if not.
 */

int find(listn_t *head, listint_t *node)
{
	int find = 0;

	while (head)
	{
		if (head->node == node)
			find = 1;
		head = head->next;
	}
	return (find);
}
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to the first node.
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cont = 0;
	listn_t *list;
	listint_t *cpy;

	list = NULL;
	cpy = head->next;

	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		cont++;
		while (cpy)
		{
			if (find(list, cpy) || (cpy == head))
			{
				printf("-> [%p] %d\n", (void *)cpy, cpy->n);
				break;
			}
			else
			{
				printf("[%p] %d\n", (void *)cpy, cpy->n);
				cont++;
			}
			if (add_n(&list, cpy) == 0)
			{
				free_list(&list);
				exit(98);
			}
			cpy = cpy->next;
		}
		free_list(&list);
	}
	return (cont);
}
