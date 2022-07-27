#include "binary_trees.h"

/**
* binary_tree_nodes - function that counts the nodes with at
* least 1 child in a binary tree.
*
* @tree: pointer to the root node of the tree to count the number of nodes.
*
* Return: nodes counts or if tree is NULL, the function must return 0.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	else if (!tree->left && tree->right)
		return (1 + binary_tree_nodes(tree->right));

	else if (tree->left && !tree->right)
		return (1 + binary_tree_nodes(tree->left));

	else if (tree->left && tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
