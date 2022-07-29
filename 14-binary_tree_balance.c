#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: the height of a binary tree or 0 if tree is NULL
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left < right)
			return (right + 1);

		else
			return (left + 1);
	}
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: A pointer to the root node of the tree to measure the balance factor.
* Return: If tree is NULL, return 0, else return balance factor.
**/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height1(tree->left) - binary_tree_height1(tree->right));
}
