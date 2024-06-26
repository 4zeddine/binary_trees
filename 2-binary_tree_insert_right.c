#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: input of pointer to the parent of the node.
 * @value: input of the value of the node.
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_right_node;

if (parent == NULL)
	return (NULL);

new_right_node = binary_tree_node(parent, value);

if (new_right_node == NULL)
	return (NULL);

if (parent->right != NULL)
{
	new_right_node->right = parent->right;
	parent->right->parent = new_right_node;
}

parent->right = new_right_node;

return (new_right_node);
}
