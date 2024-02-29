#include "binary_trees.h"

/**
 * tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node, or 0 if tree is NULL.
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor, or NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t depth_f, depth_s;

	if (!first || !second)
		return (NULL);

	depth_f = tree_depth(first);
	depth_s = tree_depth(second);

	while (depth_f > depth_s)
	{
		first = first->parent;
		depth_f--;
	}

	while (depth_s > depth_f)
	{
		second = second->parent;
		depth_s--;
	}

	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
