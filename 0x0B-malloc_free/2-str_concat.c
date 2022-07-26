#include "main.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++
	}
	return (a);
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
	unsigned int a1, a2;
	char *conc, *temp;

	if (!s1)
		s1 = "";
	else
		a1 = _strlen(s1);

	if (!s2)
		s2 = "";
	else
		a2 = _strlen(s2);

	conc = malloc(a1 + a2 + 1);
	if (!conc)
		return (0);

	tmp = conc;
	while (*s1)
		*tmp++ = *s1++;

	while ((*tmp++ = *s2++))
		;

	return (conc);
}
