#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the depth of a node in a binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
