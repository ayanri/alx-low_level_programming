#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head/next data pointer
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *a;
	
	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
