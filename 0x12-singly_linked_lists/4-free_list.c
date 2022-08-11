#include  "lists.h"

/**
 * free_list - frees a list_t list
 * @head: data type pointer
 *
 * Return: free pointer
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
