#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *@node: a pointer to the node to check
 *Return: 1 a leaf, 0 no
 *
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: The height of the tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightR = 0, heightL = 0;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		if (tree->left != NULL)
		{
			tree = tree->left;
			heightL++;
		}

		else if (tree->right != NULL)
		{
			tree = tree->right;
			heightR++;
		}
		else
			break;
	}
	if (heightL >= heightR)
		return (1 + heightL);
	return (1 + heightR);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: Pointer to the root node
 *Return: 1 perfect, 0 not perfect
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int countL = 0, countR = 0;

	if (binary_tree_is_leaf(tree))
		return (1);
	countL += binary_tree_height(tree->left);
	countR += binary_tree_height(tree->right);

	if (countL != countR)
		return (0);

	return ((binary_tree_is_perfect(tree->left)) &&
		(binary_tree_is_perfect(tree->right)));
}
