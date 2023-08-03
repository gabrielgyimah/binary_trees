#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
*/

size_t binary_tree_height_help(const binary_tree_t *tree)
{
    size_t l_height, r_height;

    if (!tree)
        return (0);

    l_height = binary_tree_height_help(tree->left);
    r_height = binary_tree_height_help(tree->right);

    return ((l_height > r_height) ? l_height + 1 : r_height + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_help(tree) - 1);
}