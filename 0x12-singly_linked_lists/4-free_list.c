#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * free_list - function that frees a list_t list.
 * @head: the list of elements
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *aux1;
	list_t *aux2;

	aux1 = head;
	while (aux1)
	{
		aux2 = aux1->next;
		free(aux1->str);
		free(aux1);
		aux1 = aux2;
		if (aux1)
			aux2 = aux2->next;
	}
}
