#include "binary_trees.h"

/**
 * binary_tree_node - Create binary tree node.
 *
 * @parent: pointer to parent of node.
 * @value: value to be puted on new node.
 *
 * Return: If it fails - NULL else - pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
