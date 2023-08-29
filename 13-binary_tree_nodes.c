#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes
 * @tree: tree
 * Return: number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);
else
	return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}