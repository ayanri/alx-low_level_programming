#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: allocated bytes
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (!memory)
	{
		exit(98);
	}
	return (memory);
}
