#include <stdio.h>
#include "lists.h"
/**
 * count_untilhead - count elements starting at head until h
 * @h: pointer to the node
 * @a: pointer to store the number of nodes.
 * Return: nothing.
 */
void count_untilhead(const dlistint_t *h, size_t *a)
{
	if (h == NULL)
		return;
	*a = *a + 1;
	print_untilhead(h->prev, a);
}
/**
 * count_untiltail - count list elements starting at h until tail
 * @h: pointer to the node
 * @a: pointer to store the number of nodes.
 * Return: nothing.
 */
void count_untiltail(const dlistint_t *h, size_t *a)
{
	if (h == NULL)
		return;
	*a = *a + 1;
	print_untiltail(h->next, a);
}
/**
 * dlistint_len - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the node.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;
	size_t b = 0;

	print_untilhead(h, &a);
	if (h)
		print_untiltail(h->next, &b);
	return (a + b);
}
