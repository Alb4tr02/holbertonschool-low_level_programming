#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - function that return the sum of all the data (n) of a list.
 * @head: pointer to the head list
 * Return: the sum of all the data (n) of a list.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	for (; head; res += head->n, head = head->next)
		;
	return (res);
}
