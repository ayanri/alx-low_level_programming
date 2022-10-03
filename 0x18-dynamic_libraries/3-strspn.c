#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: initial segment
 * @accept: bytes to be used
 *
 * Return: number of bytes from initial segment s
 * which consits of only bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int bytes = 0;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				bytes++;
				break;
			}

			else if (accept[a + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
