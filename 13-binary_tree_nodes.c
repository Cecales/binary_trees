#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to
 * count the number of nodes
 * Return: 0 If tree is NULL
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		cont = 1;

	cont += binary_tree_nodes(tree->left);
	cont += binary_tree_nodes(tree->right);

	return (cont);
}
