#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return: count of nodes wit atleast 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t node = 0;

    if (!tree)
        return (0);

    if (tree->left || tree->right)
        return (1);

    node += binary_tree_nodes(tree->left);
    node += binary_tree_nodes(tree->right);

    return (node);
}