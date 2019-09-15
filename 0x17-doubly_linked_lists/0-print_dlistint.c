#include <stdio.h>
#include "lists.h"
/**
 * print_untilhead - print list elements starting at head until h
 * @h: pointer to the node
 * @a: pointer to store the number of nodes.
 * Return: nothing.
 */
void print_untilhead(const dlistint_t *h, size_t *a)
{
	if (h == NULL)
		return;
	print_untilhead(h->prev, a);
	*a = *a + 1;
	printf("%d\n", h->n);
}
/**
 * print_untiltail - print list elements starting at h until tail
 * @h: pointer to the node
 * @a: pointer to store the number of nodes.
 * Return: nothing.
 */
void print_untiltail(const dlistint_t *h, size_t *a)
{
	if (h == NULL)
		return;
	printf("%d\n", h->n);
	*a = *a + 1;
	print_untiltail(h->next, a);
}
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the node.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;
	size_t b = 0;

	print_untilhead(h, &a);
	print_untiltail(h->next, &b);
	return (a + b);
}
