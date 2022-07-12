#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First parameter
 * @b: Second parameter
 *
 * Description: swaps the value of *a and *b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
