#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * Description: contains a copy of the string given as a parameter
 * @str: duplicate string
 *
 * Return: Pointer to duplicated string, NULL if insufficent memory
 */

char *_strdup(char *str)
{
	char *String;
	unsigned int a, length;

	if (str == NULL)
	{
		return (NULL);
	}

	a = length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length++;

	String = malloc(length * sizeof(*str));
	if (String == NULL)
	{
		return (NULL);
	}
	while (a <= length)
	{
		String[a] = str[a];
		a++;
	}
	return (String);
}
