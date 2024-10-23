#include "binary_trees.h"

/**
 * binary_tree_leaves - Determines the number of leaves in a given Tree
 * @tree: Tree to examine
 * Return: Number of leaves in given tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leaves += 1;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
