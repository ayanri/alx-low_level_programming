#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string that will be appended to
 * @src: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a]; a++)
		dest[b++] = src[a];

	return (dest);
}
