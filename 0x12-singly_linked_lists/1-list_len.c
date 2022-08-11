#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: data type pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;
	const list_t *tmp;

	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		node++;
	}
	return (node);
}
