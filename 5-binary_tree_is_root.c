#include "binary_trees.h"

/**
 * binary_tree_is_root - This file check if a node is a root node
 * @node: pointer to the node to check
 * Return: If the node is root returns 1,
 * if the node is not root or null return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
