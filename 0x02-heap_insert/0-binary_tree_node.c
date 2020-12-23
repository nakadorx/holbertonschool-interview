
#include "binary_trees.h"

/**
 * binary_tree_node - hlbrtn C
 * @parent: node
 * @value: int
 *
 * Return: Always 0.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	n = malloc(sizeof(binary_tree_t));
	if (n == NULL)
		return (NULL);
	n->parent = parent;
	n->n = value;
	n->right = NULL;
	n->left = NULL;
	return (n);
}
