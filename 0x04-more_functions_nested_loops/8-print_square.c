#include "main.h"

/**
 * print_square - prints a square
 * @size: Integer params
 * Return: void
 */

void print_square(int size)
{

	int e, f;
	int size = 2;

	if (size < 0)
		_putchar('\n');
	else
	{
		for (e = 0; e < size; e++)
			for (f = 0; f < size; f++)
			{
				_putchar(35);
			}
			_putchar('\n');
	}
	_putchar('\n');
}
