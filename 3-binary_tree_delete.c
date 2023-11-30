#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a entire binary tree
 * @tree: a pointer to the root node of  tree to delete
 * Description: If tree is NULL, do nthin
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
