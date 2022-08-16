#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head/next data pointer
 *
 * Return: head notes data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	unsigned int n;

	if (head == NULL)
		return (0);

	node = *head;
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}
