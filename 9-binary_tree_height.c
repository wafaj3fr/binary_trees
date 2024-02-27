#include "binary_trees.h"

/**
 * binary_tree_height_recursive - Measures the height.
 * @node: Pointer to node.
 *
 * Return: Height, or 0 if tree is NULL.
 */
size_t binary_tree_height_recursive(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	size_t left_height = binary_tree_height_recursive(node->left);
	size_t right_height = binary_tree_height_recursive(node->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_height - Measures the height of a tree.
 * @tree: Pointer to the root node.
 *
 * Return: Height, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height_recursive(tree) - 1);
}

