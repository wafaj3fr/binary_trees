#include "binary_trees.h"

/**
 * binary_tree_nodes - ounts the nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: Number of nodes or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
		return (nodes);
	}
	return (0);
}
