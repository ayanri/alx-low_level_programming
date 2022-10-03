#include "main.h"

/**
 * *_memset - fills memeory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of memory bytes
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; n > 0; a++; n--)
	{
		s[a] = b;
	}
	return (s);
}
