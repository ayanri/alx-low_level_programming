#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		a++;
	}

	return (s1[i] - s2[i]);
}
