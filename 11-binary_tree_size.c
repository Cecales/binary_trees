#include "binary_trees.h"

/**
 * binary_tree_size -  function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 If tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t siz = 1;

	if (!tree)
		return (0);

	siz += binary_tree_size(tree->left);
	siz += binary_tree_size(tree->right);

	return (siz);
}
