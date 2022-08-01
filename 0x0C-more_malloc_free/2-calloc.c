#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: number of bytes
 *
 * Return: pointer, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	void *memory;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (!memory)
		return (NULL);

	filler = memory;
	for (a = 0; a < (size * nmemb); a++)
		filler[a] = '\0';

	return (memory);
}
