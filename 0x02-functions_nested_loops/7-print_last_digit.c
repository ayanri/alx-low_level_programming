#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int)
{
	int j;

	if (n < 0)
		n = -n;

	j = n % 10;

	if (j < 0)
		j = -j;

	_putchar(j + '0');

	return (j);
}
