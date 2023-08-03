#include "binary_trees.h"

/**
 * binary_tree_height_dfs - return the height of a tree
 * @tree: root of the tree whose height is to be return
 * Return: height of the tree
 */

size_t binary_tree_height_dfs(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = binary_tree_height_dfs(tree->left);
	r_height = binary_tree_height_dfs(tree->right);

	return ((l_height > r_height) ? l_height + 1 : r_height + 1);
}

/**
 * binary_tree_height - return the height of a tree
 * @tree: root of the tree whose height is to be return
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_dfs(tree) - 1);
}
