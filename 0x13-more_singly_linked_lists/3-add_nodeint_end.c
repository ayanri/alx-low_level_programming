#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head/next data pointer
 * @n: struct data pointer
 *
 * Return: address of new element, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmpnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tmpnode = *head;

	while (tmpnode->next != NULL)
		tmpnode = tmpnode->next;
	tmpnode->next = newnode;

	return (newnode);
}
