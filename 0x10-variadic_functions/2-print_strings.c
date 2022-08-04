#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: pointer to the string
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	char *c;
	va_list x;

	va_start(x, n);

	if (!separator)
		return;


	for (a = 0; a < n; a++)
	{
		c = va_arg(x, char *);
		printf("%s%s", c == NULL ? "(nil)" : c, a != (n - 1) ? separator : "");
	}

	va_end(x);

	printf("\n");
}
