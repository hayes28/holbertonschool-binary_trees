#include "binary_trees.h"

int binary_tree_s(const binary_tree_t *tree);
int binary_tree_balance_(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree &&
	(binary_tree_s(tree->left) == binary_tree_s(tree->right) &&
	binary_tree_s(tree->left) == binary_tree_s(tree->right)))
		return (1);
	return (0);
}

/**
 * binary_tree_s - size
 * @tree: pointer to the root node of the tree
 *
 * Return: size of tree
 */
int binary_tree_s(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_s(tree->left) +
			binary_tree_s(tree->right));
}

/**
 * binary_tree_balance_ - height
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance_(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance_(tree->left) > binary_tree_balance_
			(tree->right))
		return (1 + binary_tree_balance_(tree->left));
	else
		return (1 + binary_tree_balance_(tree->right));
}
