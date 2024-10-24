#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates the nodes to the left as needed
 * @tree: Tree to rotate
 * Return: New Root Node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (!tree)
		return (NULL);
	temp = tree->right;
	temp->parent = tree->parent;
	tree->right = temp->left;
	if (temp->left)
		temp->left->parent = tree;
	temp->left = tree;
	tree->parent = temp;
	return (temp);
}
