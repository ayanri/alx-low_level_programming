#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head/next data type pointer
 * @index: index of node to be deleted
 *
 * Return: 1 on Success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmpnode;
	listint_t *indexnode;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);

	tmpnode = *head;
	indexnode = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmpnode);
		return (1);
	}
	for (a = 0; a < index; a += 1)
	{
		if (tmpnode == NULL)
			return (-1);
		indexnode = tmpnode;
		tmpnode = tmpnode->next;
	}
	if (indexnode)
	{
		indexnode->next = tmpnode->next;
	}
	free(tmpnode);

	return (1);
}
