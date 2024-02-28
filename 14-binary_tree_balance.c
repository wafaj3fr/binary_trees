#include "binary_trees.h"

/**
 * binary_tree_get_height - Measures height
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_get_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_height = tree->left ? 1 + binary_tree_get_height(tree->left) : 1;
			right_height = tree->right ? 1 + binary_tree_get_height(tree->right) : 1;
		}
		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_balance - Measures balance factor
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left, balance;

	if (tree)
	{
		left = ((int)binary_tree_get_height(tree->left));
		right = ((int)binary_tree_get_height(tree->right));
		balance = left - right;
	}
	return (balance);
}
