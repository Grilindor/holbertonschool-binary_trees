#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: The height of the tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightR = 0, heightL = 0;

	if (tree == NULL)
		return (0);

	heightR = binary_tree_height(tree->right);
	heightL = binary_tree_height(tree->left);
	if (heightL >= heightR)
		return (1 + heightL);
	return (1 + heightR);
}

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

	countL = binary_tree_height(tree->left);
	countR = binary_tree_height(tree->right);
	return (countL - countR);
}
