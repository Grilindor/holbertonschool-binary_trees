#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: The height of the tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0, height_l = 0;

	if (tree == NULL)
		return (0);

	height_r = binary_tree_height(tree->right);
	height_l = binary_tree_height(tree->left);
	if (height_l >= height_r)
		return (1 + height_l);
	return (1 + height_r);
}

/**
 *binary_tree_balance - function that measures
 *the balance factor of a binary tree
 *@tree: Pointer to the root node
 *Return: the balance or the difference
**/

int binary_tree_balance(const binary_tree_t *tree)
{

	int count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	count_l = binary_tree_height(tree->left);
	count_r = binary_tree_height(tree->right);
	return (count_l - count_r);
}
