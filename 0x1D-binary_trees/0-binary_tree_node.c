#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: node's parent
 * @value: value stored in the node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = calloc(1, sizeof(binary_tree_t));

	if (!bt)
		return (NULL);
	bt->n = value;
	bt->parent = parent;
	return (bt);
}
