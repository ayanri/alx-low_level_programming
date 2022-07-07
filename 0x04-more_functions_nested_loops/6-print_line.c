#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of _ to be printed
 * Return: void
 */

void print_line(int n)
{

	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
