#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int height_left, height_right;

    /*If the tree is empty, it is not perfect*/
    if (tree == NULL)
        return (0);

    /*Calculate the height of the left and right subtrees*/
    height_left = binary_tree_height(tree->left);
    height_right = binary_tree_height(tree->right);

    /*If heights of left and right subtrees not equal, the tree is not perfect*/
    if (height_left != height_right)
        return (0);

    /*If the current node is a leaf node, it is perfect*/
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /*Recursively check if the left and right subtrees are perfect*/
    return (binary_tree_is_perfect(tree->left) &&
            binary_tree_is_perfect(tree->right));
}
