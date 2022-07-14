#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to capatilize
 *
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	int c;

	while (str[c++])
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			str[c] -= 32;
	}

	return (str);
}
