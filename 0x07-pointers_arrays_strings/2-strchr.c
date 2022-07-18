#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @c: Character
 * @s: String
 *
 * Return: If c is found - a pointer to the first occurence
 * If c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return ('\0');
}
