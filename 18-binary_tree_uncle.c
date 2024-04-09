#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the sibling of a node
 * @node: Pointer to the node
 * Return: A pointer to the uncle node
 *         NULL if the parent or the node is NULL
 *         NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
		return (NULL);

	return (node->parent->parent->left);
}
