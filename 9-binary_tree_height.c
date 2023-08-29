#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree
 * Return: height or 0 if tree null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t r_height = 0;
size_t l_height = 0;
if ((tree == NULL) || (!tree->right && !tree->left))
{
	return (0);
}
else
{
r_height = binary_tree_height(tree->right);
l_height = binary_tree_height(tree->left);
if (l_height > r_height)
return (l_height + 1);
}
return(r_height + 1);
}
