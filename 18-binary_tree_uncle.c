#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find uncle
 *
 * Return: pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *f;

	if (!node)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);
	f = node->parent->parent;
	if (node->parent == f->left)
		return (f->right);
	return (f->left);
}
