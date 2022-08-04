#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: int
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list x;

	va_start(x, n);

	if (!n)
		return (0);
	for (a = 0; a < n; a++)
		sum += va_arg(x, unsigned int);

	va_end(x);

	return (sum);
}
