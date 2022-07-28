#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
* current_level - aux function to print nodes at the current level.
*
* @tree: pointer to the root node of the tree to traverse.
* @layer: to check to the layers.
* @func: pointer to a function to call for each node.
*/

void current_level(const binary_tree_t *tree, int layer, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (layer == 1)
		func(tree->n);

	else if (layer > 1)
	{
		current_level(tree->left, layer - 1, func);
		current_level(tree->right, layer - 1, func);
	}
}

/**
* binary_tree_levelorder - function that goes through a
* binary tree using level-order traversal.
*
* @tree: pointer to the root node of the tree to traverse.
* @func: pointer to a function to call for each node.
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = aux_binary_tree_height(tree), traverse;

	if (!tree || !func)
		return;

	for (traverse = 1; traverse <= height; traverse++)
		current_level(tree, traverse, func);
}
