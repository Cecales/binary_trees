#include "binary_trees.h"

/**
 * binary_tree_insert_right - This file insert a node as
 * right child of a parent node
 * @parent: pointer to the parent node of the node define as right child
 * @value: value to put in the new node
 * Return: new node or NULL in failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;

	if (parent->right == NULL)
	{
		new_node->parent = parent;
		new_node->right = NULL;
		parent->right = new_node;
	}
	else
	{
		new_node->parent = parent;
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	return (new_node);
}
