#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node of a list.
 * @head: pointer to the head list
 * @index: position of the node needed.
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		for (; index > 0 && head; index--)
			head = head->next;
		if (index == 0 && head)
			return (head);
	}
	return (NULL);
}
