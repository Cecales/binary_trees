#include "binary_trees.h"

/**
 * binary_tree_insert_left - This file insert a node as
 * left child of a parent node
 * @parent: pointer to the parent node of the node define as left child
 * @value: value to put in the new node
 * Return: new node or NULL in failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *leftp = NULL;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	leftp = parent->left;
	parent->left = new_node;

	if (leftp)
	{
		leftp->parent = new_node;
		new_node->left = leftp;
	}

	return (new_node);
}
