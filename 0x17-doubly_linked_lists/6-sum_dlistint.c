#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: head of linked list
 *
 * Return: sum of all the data, else 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
