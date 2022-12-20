#include "binary_trees.h"

/**
* binary_tree_insert_left - function that inserts a node as the
* left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newN, *i;

	if (parent == NULL)
		return (NULL);

	newN = malloc(sizeof(binary_tree_t));

	if (newN == NULL)
		return (NULL);

	newN->right = NULL;
	newN->n = value;
	i = parent->left;
	parent->left = newN;
	newN->left = i;
	newN->parent = parent;
	if (i != NULL)
		i->parent = newN;
	return (newN);
}
