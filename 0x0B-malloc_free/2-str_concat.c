#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of a string
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		return (a);
	}
}

/**
 * *str_concat - concatenate two strings
 * @s1: string content 1
 * @s2: string content 2
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int a1, a2, x;
	char *z;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	a1 = _strlen(s1);
	a2 = _strlen(s2);
	z = malloc((a1 + a2) * sizeof(char) + 1);
	if (z == 0)
		return (0);

	for (x = 0; x <= a1 + a2; x++)
	{
		if (x < a1)
			z[x] = s1[x];
		else
			z[x] = s2[x - a1];
	}
	z[x] = '\0';
	return (z);
}
