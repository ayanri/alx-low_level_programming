#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data to enter to the node
 *
 * Return: a new node else, NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *next;
	dlistint_t *current;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (a = 0; a < idx - 1 && current != NULL; a++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = current;
		next = current->next;
		current->next = new_node;
	}

	new_node->next = next;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
