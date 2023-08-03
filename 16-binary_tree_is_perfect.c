#include "binary_trees.h"

/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: pointer root of the tree
 * @level: the level of the tree
 * @depth: the depth of node
 * Return: 1 or 0 on failure
 */

int is_perfect(const binary_tree_t *tree, int level, int depth)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (level + 1 == depth);
	return (is_perfect(tree->left, level + 1, depth) &&
			is_perfect(tree->right, level + 1, depth));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0, level = 0;
	const binary_tree_t *saved_tree = tree;

	if (!tree)
		return (0);
	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	tree = saved_tree;
	return (is_perfect(tree, level, depth));
}
