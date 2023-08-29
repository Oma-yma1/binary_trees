#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes
 * @tree: tree
 * Return: number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
int num = 1;
if (tree == NULL || (tree->right == NULL && tree->left == NULL))
	return (0);
num += binary_tree_nodes(tree->right);
num += binary_tree_nodes(tree->left);
return (num);
}
