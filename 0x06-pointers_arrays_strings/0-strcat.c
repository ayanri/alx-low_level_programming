#include <main.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: parameter to be appended to
 * @src: parameter to append to dest
 * Return: void
 */


char *_strcat(char *dest, char *src)
{
	int a = -1, x;
	for (x = 0; dest[x] != '\0'; x++)
	;

	do {
		a++;
		dest[x] = src[a];
		x++;
	} while (src[a] != '\0');

	return (dest);
}
