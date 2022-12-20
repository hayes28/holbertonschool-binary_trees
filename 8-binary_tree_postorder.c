#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through
 * a binary tree using post-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		if (!tree->left && !tree->right)
			(func)(tree->n);
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		if (tree->left || tree->right)
			(func)(tree->n);
	}
}
