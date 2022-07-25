#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, initializes with a specific char
 * @size: size of memory allocated
 * @c: character
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *CharArray;
	unsigned int a;

	CharArray = malloc(size);

	if (size == 0 || CharArray == 0)
	{
		return (0);
	}

	for (a = 0; a < size; a++)
	{
		CharArray[a] = c;
	}

	return (CharArray);
}
