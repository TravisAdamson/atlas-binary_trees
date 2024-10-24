#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates the nodes to the right as needed
 * @tree: Tree to rotate
 * Return: New Root Node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;

	if (!tree)
		return (NULL);
	temp = tree->left;
	temp->parent = tree->parent;
	tree->left = temp->right;
	if (temp->right)
		temp->right->parent = tree;
	temp->right = tree;
	tree->parent = temp;
	return (temp);
}
