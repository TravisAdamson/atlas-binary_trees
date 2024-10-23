#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is a root within the tree
 * @node: node within the given binary tree
 * Return: 1 if node is root, 0 if NULL or not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}
