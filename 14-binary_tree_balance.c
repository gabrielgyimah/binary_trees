#include "binary_trees.h"

/**
 * binary_tree_height_dfss - return the height of a tree
 * @tree: root of the tree whose height is to be return
 * Return: height of the tree
 */

size_t binary_tree_height_dfss(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height_dfss(tree->left);
	right = binary_tree_height_dfss(tree->right);

	return ((left > right) ? left + 1 : right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree
 * Return: tree's balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height_dfss(tree->left);
	right = binary_tree_height_dfss(tree->right);

	return (left - right);
}
