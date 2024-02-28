#include "binary_trees.h"

/**
 * perfect_tree - Helper function to check if a tree is perfect.
 * @tree: Tree to check.
 *
 * Return: Height of the tree if it is perfect, 0 otherwise.
 */

int perfect_tree(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_height = 1 + perfect_tree(tree->left);
		right_height = 1 + perfect_tree(tree->right);

		if (left_height == right_height)
			return (left_height);
	}

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Binary tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (perfect_tree(tree) != 0);
}
