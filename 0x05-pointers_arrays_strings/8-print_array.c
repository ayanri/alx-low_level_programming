#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array upto n elements
 * @a: Array to be read from
 * @n: Number of elements to be read
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int c;


	if (n > 0)
	{
		for (c = 0 ; n > c; c++)
		{
			if (c != n - 1)
			{
				printf("%d, ", a[c]);
			}
			else
			{
				printf("%d", a[c]);
			}

		}
	}
	_putchar("\n");
}
