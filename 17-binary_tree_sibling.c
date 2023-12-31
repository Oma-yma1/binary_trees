#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node
 * Return: pointer to the sibling node
 * credit: taha omayma
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}
