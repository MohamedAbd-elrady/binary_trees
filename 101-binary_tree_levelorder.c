#include "binary_trees.h"

/**
  * binary_tree_height - returns the height of a binary tree
  * @tree: Tree to measure
  * Return: height of the tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	return (right > left ? right : left);
}

/**
  * binary_tree_levelorder - define function
  * @tree: root node of the tree
  * @func: function pointer to a function that accepts an integer
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *temp;
	int height, node_num, i, k;

	if (!tree || !func)
		return;
	temp = (binary_tree_t *)tree;
	height  = binary_tree_height(tree);
	for (node_num = 1, k = 0; k <= height; k++, node_num *= 2)
		;
	node_num--;
	printf("%d, %d\n", height, node_num);
	for (i = 0; --height >= 0; i++)
	{

	}
	temp++;
}
