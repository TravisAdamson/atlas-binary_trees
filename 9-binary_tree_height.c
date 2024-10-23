#include "binary_trees.h"

/**
 * binary_tree_height - Locates the height of a given tree
 * @tree: Tree to examine
 * Return: Height of given tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;
	if (left > right)
		return (left);
	else
		return (right);
}
