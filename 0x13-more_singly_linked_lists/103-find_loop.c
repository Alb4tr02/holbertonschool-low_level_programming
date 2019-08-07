#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the first node.
 * Return: pointer to the loop or NULL if the list doesn't have a loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t cpy;
	listint_t end;

	if (head)
	{
		end = *head;
		cpy = *head;
		end.next = head->next;
		end.n = 0;
		cpy.n = 0;
		while (end.next)
		{
			end.n = 0;
			cpy.next = head;
			cpy.n = cpy.n + 1;
			for (; head != end.next; end.n = end.n + 1)
				head = head->next;
			if (end.n != cpy.n)
				return (head);
			end.next = head->next;
			head = cpy.next;
		}
	}
	return (NULL);
}
