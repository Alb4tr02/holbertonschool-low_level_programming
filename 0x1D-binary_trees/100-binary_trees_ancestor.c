#include "binary_trees.h"
/**
 * up - function that moves up on the tree
 * @w: pointer to the walker node
 * @t: pinter to the top node
 * Return: 1 if w is equal to t
 */
int up(const binary_tree_t *w, const binary_tree_t *t)
{
	while (w && (w != t))
		w = w->parent;
	return ((w == t) ? 1 : 0);
}
/**
 * binary_trees_ancestor - function that finds the lowest common ancestor of
 *                         two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor.
 */
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
