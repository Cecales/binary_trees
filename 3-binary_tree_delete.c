#include "binary_trees.h"

/**
 * binary_tree_delete - This file delete an entire binary tree
 * @tree: pointer to the root node of the binary tree to delete
 * Return: nothing if tree is NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
