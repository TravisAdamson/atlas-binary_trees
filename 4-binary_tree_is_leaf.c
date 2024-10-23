#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if given node in tree is a leaf
 * @node: node within the given binary tree
 * Return: 1 if node is leaf, 0 if NULL or not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
