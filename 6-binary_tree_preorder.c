#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree
 * using pre-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 * Return: what is in the node (int)
 **/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*If tree or func is NULL, do nothing*/
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	func(tree->n);/*Call the function for the current node*/

	binary_tree_preorder(tree->left, func);/*Recursively traverse left subtree*/
	binary_tree_preorder(tree->right, func);/*Recursively traverse right subtree*/
}
