#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
* binary_tree_balance - function that measures the
* balance factor of a binary tree.
*
* @tree: pointer to the root node of the tree to measure the balance factor.
*
* Return: the balance factor or if tree is NULL, return 0.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int calculate_balance;

	if (!tree)
		return (0);

	calculate_balance = aux_binary_tree_height(tree->left) -
		aux_binary_tree_height(tree->right);

	return (calculate_balance);
}
