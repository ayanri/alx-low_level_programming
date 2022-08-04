#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of all arguments passed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *s;
	va_list x;

	va_start(x, format);

	while (format && format[a])
	{
		switch (format[a++])
		{
		case 'c':
			printf("%c", va_arg(x, int));
			break;
		case 'i':
			printf("%d", va_arg(x, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(x, double));
			break;
		case 's':
			s = va_arg(x, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}

		if (format[a])
			printf(", ");

	}

	printf("\n");

	va_end(x);
}
