#include "binary_trees.h"

/**
* binary_tree_size - Function that measures the size of a binary tree.
*
* @tree: Pointer to the root node of the tree to find size
*
* Return: binary tree size or 0 on failure.
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
