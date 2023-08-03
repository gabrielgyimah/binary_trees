#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node:  pointer to the node to find the sibling
 * Returns: pointer to the siblin node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *node_parent;

    if (!node || !node->parent)
        return (NULL);

    node_parent = binary_tree_sibling(node->parent);

    if (!node_parent)
        return (NULL);

    if (node == node_parent->left)
        return (node_parent->right);
    
    return (node_parent->left);
}