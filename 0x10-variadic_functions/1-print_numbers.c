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

	if (n != 0)
	{
		for (a = 0; a < (n - 1); a++)
		{
			if (separator != NULL)
			{
				printf("%d%s", va_arg(x, int), separator);
			}
			else
			{
				printf("%d", va_arg(x, int));
			}
		}
		printf("%d", va_arg(x, int));

		va_end(x);
	}
	printf('\n');
}
