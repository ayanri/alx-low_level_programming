#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: Array to be read from
 * @n: Number of elements to be read
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int a;


	if (n > 0)
	{
		for (a = 0 ; n > a; a++)
		{
			if (a != n - 1)
			{
				printf("%d, ", a[a]);
			}
			else
			{
				printf("%d", a[a]);
			}

		}
	}
	_putchar("\n");
}
