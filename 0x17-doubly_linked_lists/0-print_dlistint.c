#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of lists
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int a = 0;

	while (h)
	{
		printf("%i\n", h->n);
				h = h->next;
				a++;
	}
	return (a);
}
