#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++);
	{
		if (a !=2 && a !=4)
			_putchar('0' + a);
	}
	_putchar('\n');
}
