#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head/next data pointer
 * @index: index of the node
 *
 * Return: nth node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = head;
	unsigned int a = 0;

	for (; nth_node && a < index; a++)
	{
		nth_node = nth_node->next;
	}
	return (nth_node);
}
