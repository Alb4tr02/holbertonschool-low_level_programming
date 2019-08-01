#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the list of elements
 * @str: string to be stored
 * Return: direction of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int flag = 1;
	int i = 0;
	char *s;
	list_t *p = *head;
	list_t *new = malloc(sizeof(list_t));

	do {
		if (!p || !(p->next))
		{
			if (!new)
				return (NULL);

			s =  strdup(str);

			new->str = s;

			for (; *(str + i); i++)
				;
			new->len = i;
			new->next = NULL;
			if (!p)
			{
				*head = new;
				return (new);
			}
			p->next = new;
			flag = 0;
		}
		else
			p = p->next;
	} while (flag);
	return (new);
}
