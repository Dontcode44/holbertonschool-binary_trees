#include "binary_trees.h"

/**
* binary_tree_is_root - Function that checks if a given node is a root
* @node: Pointer to the node to check
*
* Return: 1 || 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	if (node->parent == NULL && node->left && node->right)
		return (1);

	return (0);
}
