#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: data type pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a;
	const list_t *tmp;

	a =  0;
	tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			tmp = tmp->next;
			a++;
		}
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			a++;
		}
	}
	return (a);
}
