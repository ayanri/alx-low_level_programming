#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of a linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
