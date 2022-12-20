#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of tree to count
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodeC = 0;

	if (!tree)
		return (0);
	if ((tree->left != NULL) || (tree->right != NULL))
		nodeC += 1;
	nodeC += binary_tree_nodes(tree->left);
	nodeC += binary_tree_nodes(tree->right);
	return (nodeC);
}
