#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function
 *
 * Return: index of the first element for which the cmp function does not
 * return 0 else, -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
