#include "binary_trees.h"

/**
* count_nodes - function that counts the nodes number in a binary tree.
*
* @tree: pointer to the root node of the tree to count the nodes number.
*
* Return: the number of nodes or 0 in failure.
*/

int count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (count_nodes(tree->left) + count_nodes(tree->right) + 1);
}

/**
* is_complete - aux function to checks if a binary tree is complete.
*
* @tree: pointer to the root node of the tree to check.
* @index: index assigned to current node.
* @nodes_number: number of nodes in the tree.
*
* Return: 1 if is a complete binary tree || 0 in failure.
*/

int is_complete(const binary_tree_t *tree, int index, int nodes_number)
{
	if (!tree)
		return (1);

	if (index >= nodes_number)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, nodes_number) &&
	is_complete(tree->right, 2 * index + 2, nodes_number));
}

/**
* binary_tree_is_complete - function that checks if a binary tree is complete.
*
* @tree: pointer to the root node of the tree to check.
*
* Return: 1 || 0.
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_complete(tree, 0, count_nodes(tree)));
}
