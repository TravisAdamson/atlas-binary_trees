#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse given binary tree using postorder
 * @tree: given binary tree
 * @func: function to be called on each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
