#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two string
 * @s1: string1
 * @s2: string2
 * @n: number of bytes
 *
 * Return: pointer else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = n, a;
	char (*string);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		length++;
	string = malloc(sizeof(char) * (length + 1));

	if (!string)
		return (NULL);

	length = 0;

	for (a = 0; s1[a]; a++)
		string[length++] = s1[a];

	for (a = 0; s2[a] && a < n; a++)
		string[length++] = s2[a];

	string[length] = '\0';

	return (string);
}
