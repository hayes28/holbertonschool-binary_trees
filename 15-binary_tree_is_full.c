#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		l = (binary_tree_is_full(tree->left));
	else
		l = 0;
	if (tree->right != NULL)
		r = (binary_tree_is_full(tree->right));
	else
		r = 0;
	if ((r == 0 && l == 0) || (l != r))
		return (0);
	return (1);
}
