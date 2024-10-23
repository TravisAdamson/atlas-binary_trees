#include "binary_trees.h"

/**
 * binary_tree_is_full - Determines if given tree is full
 * @tree: Tree to evaluate
 * Return: 1 upon full, 0 upon NULL tree or if tree has only 1 node
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
}
