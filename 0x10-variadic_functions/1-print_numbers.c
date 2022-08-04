#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list x;

	va_start(x, n);
	for (a = 0; a < n; a++)
	{
		printf("%i", va_arg(x, n));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(x);

	_putchar('\n');
}
