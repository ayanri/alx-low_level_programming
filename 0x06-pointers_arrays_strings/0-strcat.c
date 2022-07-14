#include <main.h>
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: char to be appended to
 * @src: char to append to dest
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[j] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}

	dest += '\0';

	return (dest);
}
