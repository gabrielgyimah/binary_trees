#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts node at left of parent
 * 
 * @parent: parent node of the node being inserted into tree
 * @value: n value of the new node
 * 
 * Return: pointer to the created node
*/


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (!new_node)
        return (NULL);

    new_node->right = NULL;
    new_node->parent = parent;
    new_node->n = value;

    if (parent->left)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    else
        new_node->left = NULL;

    parent->left = new_node;

    return (new_node);
}