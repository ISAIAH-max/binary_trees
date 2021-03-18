#include "binary_trees.h"

/**
 *binary_tree_height - A function that measures the height of a binary tree.
 *@tree: A pointer to the root node of the tree to measure the height.
 *Return: Height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0, y = 0;

	if (tree)
	{
		x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((x > y) ? x : y);
	}
	return (0);
}
