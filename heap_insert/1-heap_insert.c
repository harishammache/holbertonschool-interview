#include <stdlib.h>
#include "binary_trees.h"

/**
 * swap_nodes - swap values of two nodes
 */
static void swap_nodes(heap_t *a, heap_t *b)
{
	int tmp = a->n;
	a->n = b->n;
	b->n = tmp;
}

/**
 * heapify_up - restore max heap property going up
 */
static heap_t *heapify_up(heap_t *node)
{
	while (node->parent && node->n > node->parent->n)
	{
		swap_nodes(node, node->parent);
		node = node->parent;
	}
	return (node);
}

/**
 * find_insert_position - BFS to find insertion point
 */
static heap_t *find_insert_position(heap_t *root)
{
	heap_t **queue;
	int front = 0, back = 0, size = 1024;
	heap_t *tmp;

	queue = malloc(sizeof(heap_t *) * size);
	if (!queue)
		return (NULL);

	queue[back++] = root;

	while (front < back)
	{
		tmp = queue[front++];

		if (!tmp->left || !tmp->right)
		{
			free(queue);
			return (tmp);
		}

		queue[back++] = tmp->left;
		queue[back++] = tmp->right;
	}

	free(queue);
	return (NULL);
}

/**
 * heap_insert - inserts a value into a Max Binary Heap
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *node, *parent;

	if (!root)
		return (NULL);

	node = binary_tree_node(NULL, value);
	if (!node)
		return (NULL);

	if (*root == NULL)
	{
		*root = node;
		return (node);
	}

	parent = find_insert_position(*root);
	if (!parent)
		return (NULL);

	node->parent = parent;

	if (!parent->left)
		parent->left = node;
	else
		parent->right = node;

	return heapify_up(node);
}
