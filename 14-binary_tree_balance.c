#include "binary_trees.h"
/**
* _binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height.
* Return: int
**/

size_t _binary_tree_height(const binary_tree_t *tree)
{
	int left_H = 0, right_H = 0;

	if (tree == NULL)
		return (0);

	left_H = _binary_tree_height(tree->left) + 1;
	right_H = _binary_tree_height(tree->right) + 1;

	if (left_H > right_H)
		return (left_H);
	else
		return (right_H);
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the tree to measure the balance factor
* Return: balance factor
**/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
