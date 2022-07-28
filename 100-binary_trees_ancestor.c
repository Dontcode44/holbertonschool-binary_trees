#include "binary_trees.h"

/**
* findLCA - aux function to finds the lowest common ancestor of two nodes.
* 
* @first: pointer to the first node.
* @second: pointer to the second node.
*
* Return: pointer to the lowest common ancestor node of the two given nodes or NULL.
*/

binary_tree_t *findLCA(const binary_tree_t *tree,
const binary_tree_t *first, const binary_tree_t *second)
{
	if (!tree)
		return (NULL);

	if (tree->n > first && tree->n > second)
		return findLCA(tree->left, first, second);

	if (tree->n < first && tree->n < second)
		return findLCA(tree->right, first, second);

	return (tree);
}

/**
* binary_trees_ancestor - function that finds the lowest common ancestor of two nodes.
* 
* @first: pointer to the first node.
* @second: pointer to the second node.
*
* Return: pointer to the lowest common ancestor node of the two given nodes or NULL.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	return (findLCA(0, first, second) + 1);
}
