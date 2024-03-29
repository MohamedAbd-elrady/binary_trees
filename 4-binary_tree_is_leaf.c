#include "binary_trees.h"
/**
  * binary_tree_is_leaf - checks to see if the node is a leaf
  * @node: Node to check
  * Return: 1 if it is a leaf, 0 if not.
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right ? 1 : 0);
}
