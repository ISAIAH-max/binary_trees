#include "binary_trees.h"

/**
 *binary_tree_is_full - A function that checks if a binary tree is full
 *@tree: A pointer to the root node of the tree to check
 *
 *Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				binary_tree_is_full(tree->left) == 0 ||
				binary_tree_is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
