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
	if (!separator)
		return;

	for (a = 0; a < n; a++)
	{
		printf("%d%s", va_arg(x, int), a != (n - 1) ? separator : "");
	}

	va_end(x);
	_putchar('\n');
}
