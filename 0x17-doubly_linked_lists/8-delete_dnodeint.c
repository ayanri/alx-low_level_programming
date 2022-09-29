#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: double pointe to the linked list
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (a = 0; a < index; a++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
