#include "binary_trees.h"
#include <stdio.h>
int up(const binary_tree_t *w, const binary_tree_t *t)
{
	while (w && (w != t))
		w = w->parent;
	return ((w == t) ? 1 : 0);
}
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *aux = NULL;
	binary_tree_t f;
	binary_tree_t s;

	if (!first || !second)
		return (NULL);
	f  = *first;
	s = *second;
	if (up(first, second))
		return ((s.parent)->left == second ? (s.parent)->left :
			(s.parent)->right);
	if (up(second, first))
		return ((f.parent)->left == first ? (f.parent)->left :
			(f.parent)->right);
	aux = first->parent;
	while (aux)
	{
		if (up(second, aux))
			return (aux);
		aux = aux->parent;
	}
	return (NULL);
}
