#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the first node.
 * Return: pointer to the loop or NULL if the list doesn't have a loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head)
	{
		listint_t e;
		listint_t c;

		for (c.n = 1, e.next = head->next; e.next; c.n = c.n + 1)
		{
			c.next = head;
			for (e.n = 0; head != e.next; e.n = e.n + 1)
				head = head->next;
			if (e.n != c.n)
				return (head);
			e.next = head->next;
			head = c.next;
		}
	}
	return (NULL);
}
