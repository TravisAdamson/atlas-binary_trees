#include "binary_trees.h"

/**
 * binary_tree_depth - Locates the depth of a given tree
 * @tree: Tree to examine
 * Return: depth of given tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
