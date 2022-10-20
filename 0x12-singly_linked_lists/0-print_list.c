#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const lists_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
