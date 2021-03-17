#include "binary_trees.h"

/**
 *binary_tree_node - Create a binary tree node
 *@parent: a pointer to the parent node of the node to create
 *@value: The value to put in the new node
 *
 *Return: poiter to the new node else NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	root = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (root == NULL)
		return (NULL);

	else
	{
		root->n = value;
		root->parent = parent;
		root->left = NULL;
		root->right = NULL;
	}

	return (root);
}
