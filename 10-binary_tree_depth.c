#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (!tree)
        return (0);

    if (!tree->parent)
        return (depth);
    
    depth++;
    return depth + binary_tree_depth(tree->parent);  
}