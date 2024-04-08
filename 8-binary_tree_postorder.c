#include "binary_trees.h"

/**
 *binary_tree_postorder - function that goes through a binary tree
 *using post-order traversal
 *@tree: Pointer to the root node
 *@func: Pointer to a functionn to call
 **/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*If tree or func is NULL, do nothing*/
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);/*Recursively traverse left subtree*/
	binary_tree_postorder(tree->right, func);
/*Recursively traverse right subtree*/
	func(tree->n);/*Call the function for the current node*/
}
