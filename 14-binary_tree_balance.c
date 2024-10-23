#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Find balance factor of given binary tree
 * @tree: Tree to examine
 * Return: balance factor value, 0 upon NULL tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
