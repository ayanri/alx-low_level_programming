#include <main.h>
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: char to check
 * @src: char to check
 * Return: a pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}

	return (dest);
}
