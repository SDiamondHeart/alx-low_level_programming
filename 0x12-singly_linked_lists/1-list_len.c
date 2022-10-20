#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: singly linked lists
 *
 * Return: number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_of_nodes;

	num_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
