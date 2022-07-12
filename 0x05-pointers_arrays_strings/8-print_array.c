#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma, followed by a space
 * numbers should be displayed in the same order as stored in the array
 * you are allowed to use printf
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;
	for (n--; n >= 0; n--, c++)
	{
		printf("%d", a[c]);
		if (n > 0)
		{
		printf(", ");
		}
	}
	printf("\n");
}
