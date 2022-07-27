#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree.
*
* @tree: pointer to the root node of the tree to measure the height.
*
* Return: If tree is NULL, the function must return 0.
*/

size_t aux_binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0;

	if (!tree)
		return (0);

	else
	{
		left_side = aux_binary_tree_height(tree->left);
		right_side = aux_binary_tree_height(tree->right);

		if (left_side > right_side)
			return (left_side + 1);

		else
			return (right_side + 1);
	}
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (aux_binary_tree_height(tree) - 1);
}
