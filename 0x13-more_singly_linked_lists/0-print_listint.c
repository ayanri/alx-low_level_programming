#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: struct data type pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int a = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		a++;
	}
	return (a);
}
