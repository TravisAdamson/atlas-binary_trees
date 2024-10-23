#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse given binary tree using inorder
 * @tree: given tree
 * @func: function to be called on each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
