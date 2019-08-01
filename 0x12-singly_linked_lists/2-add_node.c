#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the list of elements
 * @str: string to be stored
 * Return: direction of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	char *s =  strdup(str);
	new->str = s;
	for (; *(s + i); i++)
		;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
