#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a left child to a given parent node
 * @parent: parent node to insert under
 * @value: value of inserted node
 * Return: Pointer to inserted node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ins_node;

	if (!parent)
		return (NULL);
	ins_node = binary_tree_node(parent, value);
	if (!ins_node)
		return (NULL);

	if (parent->right)
	{
		ins_node->right = parent->right;
		parent->right->parent = ins_node;
	}
	parent->right = ins_node;
	return (ins_node);
}
