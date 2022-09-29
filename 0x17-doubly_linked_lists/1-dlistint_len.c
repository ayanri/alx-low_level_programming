#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head of a double list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
