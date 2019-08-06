#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum of all the data (n) of a
 *               listint_t linked list.
 * @head: pointer to the first node.
 * Return: summ of all data
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
