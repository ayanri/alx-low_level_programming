#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of linked list
 * @index: index of the node, starting from 0
 *
 * Return: nth node else, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node;

	if (head == NULL)
		return (0);

	nth_node = head;
	while (index != 0)
	{
		nth_node = nth_node->next;
		index--;
		if (nth_node == NULL)
			return (0);
	}
	return (nth_node);
}
