#include "binary_trees.h"

/**
 *binary_tree_balance - function that measures
 *the balance factor of a binary tree
 *@tree: Pointer to the root node
 *Return: the balance or the difference
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int countL = 0, countR = 0;

	if (tree->right != NULL)
		countR++;
	if (tree->left != NULL)
		countL++;
	countL += binary_tree_balance(tree->left);
	countR += binary_tree_balance(tree->right);
	return (countL - countR);
}
