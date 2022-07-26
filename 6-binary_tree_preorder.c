#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through
 * a binary tree using pre-order traversal
 *@tree: Pointer to tree
 *@func: Pointer to function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	printf("%d\n", tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}