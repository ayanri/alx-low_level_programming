#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head/next data pointer
 *
 * Return: sum, else 0
 */

int sum_listint(listint_t *head)
{
	listint_t (*tmpnode);
	int sum = 0;

	if (!head)
		return (0);

	tmpnode = head;
	while (tmpnode)
	{
		sum += tmpnode->n;
		tmpnode = tmpnode->next;
	}
	return (sum);
}
