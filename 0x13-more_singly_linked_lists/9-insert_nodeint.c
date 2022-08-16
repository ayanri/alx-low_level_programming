#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @idx: index of the list
 * @head: head/next data type pointer
 * @n: integer
 *
 * Return: address of the new node, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmpnode;
	listint_t *newnode;
	unsigned int a = 0;

	if (!head && !*head)
		return (NULL);
	tmpnode = *head;

	if (idx == a)
	{
		newnode = malloc(sizeof(listint_t));
		if (!newnode)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (tmpnode)
		{
			if (idx == a + 1)
			{
				newnode = malloc(sizeof(listint_t));
				if (!newnode)
					return (NULL);
				newnode->n = n;
				newnode->next = tmpnode->next;
				tmpnode->next = newnode;
				return (newnode);
			}
			tmpnode = tmpnode->next;
			a++;
		}
	}
	return (NULL);
}
