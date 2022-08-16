#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list
 * @head: head/next data type pointer
 *
 * Return: pointer to first node of reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *oldnode;
	listint_t *newnode;

	oldnode = NULL;
	while (head && *head)
	{
		newnode = (*head)->next;
		(*head)->next = oldnode;
		oldnode = *head;
		*head = newnode;
	}
	*head = oldnode;
	return (*head);
}
