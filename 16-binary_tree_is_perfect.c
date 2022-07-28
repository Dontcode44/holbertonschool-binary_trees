#include "binary_trees.h"

/**
* depth - function that measures the depth of a
* node in a binary tree.
*
* @tree: pointer to the node to measure the depth.
*
* Return: If tree is NULL, the function must return 0.
*/

int depth(const binary_tree_t *tree)
{
	int depth_count = 0;

	if (!tree)
		return (0);

	for (; tree; depth_count++)
		tree = tree->left;

	return (depth_count);
}

/**
* is_perfect - aux function that checks if a binary tree is perfect.
*
* @tree: pointer to the root node of the tree to check.
* @depth_count: counter of depth.
* @layer: to check to the final layer.
*
* Return: 0 || 1.
*/

int is_perfect(const binary_tree_t *tree, int depth_count, int layer)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (depth_count == layer + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth_count, layer + 1) &&
	is_perfect(tree->right, depth_count, layer + 1));
}

/**
* binary_tree_is_perfect - function that checks if a binary tree is perfect.
*
* @tree: pointer to the root node of the tree to check.
*
* Return: 0 || 1.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	if (!tree)
		return (0);

	return (is_perfect(tree, d, 0));
}
