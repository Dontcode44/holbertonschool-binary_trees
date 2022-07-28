#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
* binary_tree_is_complete - function that checks if a binary tree is complete.
*
* @tree: pointer to the root node of the tree to check.
*
* Return: 1 || 0.
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (!tree)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	return (left_depth == right_depth && binary_tree_is_complete(tree->left) &&
	binary_tree_is_complete(tree->right));
}
