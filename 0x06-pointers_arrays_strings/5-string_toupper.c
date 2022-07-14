#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to capatilize
 *
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if ((str[c] <= 97) && (str[c] >= 122))
		{
			str[c] = str[c] - 32;
		}
	c++;
	}
	return (str);
}
