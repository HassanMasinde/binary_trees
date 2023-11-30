#include "binary_trees.h"

/**
 * binary_tree_insert_left - a funcn that inserts a node as the left-child
 *@parent: a pointer to  node to insert the left-child in.
 *@value: the value to store in a new node.
 * Return: ptr to created node, or NULL on fail or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
