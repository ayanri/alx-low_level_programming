#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: pointer to string
 * @n: number of integers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list x;

	va_start(x, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(x, int));
		if (a != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf('\n');

	va_end(x);
}
