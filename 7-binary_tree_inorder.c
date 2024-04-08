#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a functionn to call
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
