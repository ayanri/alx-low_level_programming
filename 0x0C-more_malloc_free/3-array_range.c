#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: lowest value
 * @max: highest value
 *
 * Return: pointer, else NULL
 */

int *array_range(int min, int max)
{
	int a;
	int b;
	int *array;

	if (min > max)
		return (NULL);

	b = max - min + 1;
	array = malloc(sizeof(int) * b);

	if (!array)
		return (NULL);
	for (a = 0; a < b; a++)
		array[a] = min++;

	return (array);
}
