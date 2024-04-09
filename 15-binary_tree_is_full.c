#include "binary_trees.h"
/**
 * binary_tree_size - function that measures all node of a binary tree
 * @tree: Pointer to the root node
 * Return: 1 if the tree is considered full
 *         0 if the tree isn't considered full or NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		if (tree->left != NULL && tree->right != NULL)
			return (1);
	}
	return (0);
}
