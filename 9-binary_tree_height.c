#include "binary_trees.h"
/**
 * binary_tree_inorder - function that measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: The height of the tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		if (tree->left != NULL)
		{
			tree = tree->left;
			height ++;
		}

		else if(tree->right != NULL)
		{
			tree = tree->right;
			height++;
		}
		else
			break;
	}
	return(height);
}
