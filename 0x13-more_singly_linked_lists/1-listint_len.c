#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: struct data type pointer
 *
 * Return: number of element linked
 */

size_t listint_len(const listint_t *h)
{
	unsigned int a = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
		a++;
	return (a);
}
