#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);


/**
 *binary_tree_balance - A function that measures the balance factor
 *of a binary tree
 *@tree: A pointer to the root node of the tree to measure the balance factor
 *
 *Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance_factor = 0;

	if (tree)
	{
		balance_factor = binary_tree_height(tree->left)
- binary_tree_height(tree->right);
		return (balance_factor);
	}
	return (0);
}


/**
 *binary_tree_height - A function that measures the height of a binary tree.
 *@tree: A pointer to the root node of the tree to measure the height.
 *Return: Height of the binary tree
 *If tree is NULL, your function must return 0
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
