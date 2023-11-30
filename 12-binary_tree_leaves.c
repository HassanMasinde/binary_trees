#include "binary_trees.h"

/**
 * binary_tree_is_leaf -   functn that checks if a node is a leaf.
 *@node: is a ptr to  node to check.
 * Return: return 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_leaves - nober of leaves
 *@tree: pter to the root node of the tree to count the number of leaves.
 * Return:  tree is NULL, the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

}
