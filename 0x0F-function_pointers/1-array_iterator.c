#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter on each element ofarray
 * @array: array of integer
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
