#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the left-child of another node
* @value: is the value to store in the new node
* @parent: is a pointer to the node to insert the left-child in
* Return: a pointer to created node, or NULL on failure or if parent is NULL
**/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
