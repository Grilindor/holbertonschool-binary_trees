#include "binary_trees.h"
/**
 * binary_tree_node - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node
 * Return: 0 if the tree is NULL or the number of nodes with at least a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t count = 0;

	if (tree->right != NULL || tree->left != NULL)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
