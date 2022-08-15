#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head/next node pointer
 * @n: struct data type pointer
 *
 * Return: address of new element, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
