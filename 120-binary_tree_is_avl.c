#include "binary_trees.h"

int given_tree_height(const binary_tree_t *tree);
int bottom_value(const binary_tree_t *tree);
int tree_is_bst(const binary_tree_t *tree, int n);
int top_value(const binary_tree_t *tree);

/**
 * binary_tree_is_avl - Determines if given tree is an AVL tree
 * @tree: Tree to rotate
 * Return: 1 if the tree is AVL, 0 if not
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);
	height += given_tree_height(tree->left);
	height -= given_tree_height(tree->right);
	if (height < -1 || height > 1)
		return (0);
	if (!tree_is_bst(tree, tree->n))
		return (0);
	if (!tree->left && !binary_tree_is_avl(tree->left))
		return (0);
	if (!tree->right && !binary_tree_is_avl(tree->right))
		return (0);
	return (1);
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

/**
 * tree_is_bst - Determines if given tree is BST
 * @tree: Tree to examine
 * @n:
 * Return: 1 if BST, 0 if not
 */
int tree_is_bst(const binary_tree_t *tree, int n)
{
	if (!tree)
		return (1);

	if ((tree->left && top_value(tree->left) > tree->n) ||
		(tree->right && bottom_value(tree->right) < tree->n))
		return (0);
	if (tree->parent &&
		((tree == tree->parent->right &&
			tree->left && tree->left->n < tree->parent->n) ||
		(tree == tree->parent->left &&
			tree->right && tree->right->n > tree->parent->n)))
		return (0);

	if (tree->left && (n == tree->left->n || !tree_is_bst(tree->left, n)))
		return (0);
	if (tree->right && (n == tree->right->n || !tree_is_bst(tree->right, n)))
		return (0);
	return (1);
}

/**
 * top_value- finds the upper value in Tree
 * @tree: Tree to check
 * Return: Upper value
 */
int top_value(const binary_tree_t *tree)
{
	int left = 0, right = 0, top = 0;

	if (!tree)
		return (INT_MIN);
	left = max_value(tree->left);
	right = max_value(tree->right);

	if (left > right)
		top = left;
	else
		top = right;
	if (top < tree->n)
		return (tree->n);
	else
		return (top);
}


/**
 * bottom_value- finds the lower value in Tree
 * @tree: Tree to check
 * Return: lower value
 */
int bottom_value(const binary_tree_t *tree)
{
	int left = 0, right = 0, bottom = 0;

	if (!tree)
		return (INT_MAX);
	left = min_value(tree->left);
	right = min_value(tree->right);

	if (left < right)
		bottom = left;
	else
		bottom = right;
	if (bottom > tree->n)
		return (tree->n);
	else
		return (bottom);
}
