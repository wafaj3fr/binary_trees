#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a tree.
 * @tree: Pointer to the root node.
 *
 * Return: Height, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree)
		{
			left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
			right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		}
		return (left_height > right_height ? left_height : right_height);
	}
}

