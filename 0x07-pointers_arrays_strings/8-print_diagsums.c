#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int m, sum1 = 0, sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 += a[m];
		a += size;
	}

	a -= size;

	for (m = 0; m < size; m++)
	{
		sum2 += a[m];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
