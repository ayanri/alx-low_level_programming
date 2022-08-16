#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head/next data pointer
 *
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	if (!head)
		return;

	while (*head != NULL)
	{
		a = *head
		*head = (*head)->next;
		free(a);
	}
}
