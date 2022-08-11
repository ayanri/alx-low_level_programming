#include "lists.h"

/**
 * _strlen - length of a string
 * @s: char pointer
 *
 * Return: always 0
 */

int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	return (len);
}

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: data type pointer
 * @str: data type pointer
 *
 * Return: address of new element, else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);
	n_node->len = _strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
