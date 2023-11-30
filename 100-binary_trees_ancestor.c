#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowes
 * @first: Pointer
 * @second: Pointer
 *
 * Return: Pointer
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *f_copy, *s_copy;

	for (f_copy = first; f_copy; f_copy = f_copy->parent)
		for (s_copy = second; s_copy; s_copy = s_copy->parent)
			if (f_copy == s_copy)
				return ((binary_tree_t *)f_copy);
	return (NULL);
}
