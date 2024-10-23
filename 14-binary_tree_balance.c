#include "binary_trees.h"

int given_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Find balance factor of given binary tree
 * @tree: Tree to examine
 * Return: balance factor value, 0 upon NULL tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (given_tree_height(tree->left) - given_tree_height(tree->right));
}

/**
 * given_tree_height - Locates the height of a given tree
 * @tree: Tree to examine
 * Return: Height of given tree
 */
int given_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left || tree)
		left = given_tree_height(tree->left) + 1;
	else
		left = 0;
	if (tree->right || tree)
		right = given_tree_height(tree->right) + 1;
	else
		right = 0;
	if (left > right)
		return (left);
	else
		return (right);
}
