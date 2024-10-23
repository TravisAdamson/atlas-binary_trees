#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node with the given parent
 * @parent: Pointer to parent node to add this node to
 * @value: value of the added node
 * Return: Pointer to added node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *add_node;

	add_node = malloc(sizeof(binary_tree_t));
	if (!add_node)
		return (NULL);

	add_node->n = value;
	add_node->parent = parent;
	add_node->left = NULL;
	add_node->right = NULL;
	return (add_node);
}
