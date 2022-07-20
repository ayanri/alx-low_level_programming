#include "main.h"

/**
 * is_prime_number - returns 1 if int is prime number
 * @n: int
 *
 * Return: 1 if n is prime number else 0
 */

int is_prime_number(int n)
{
	return (division(n, 2));
}

/**
 * division - check all divisible numbers < n
 * @n: int
 * @a: int
 *
 * Return: int
 */

int division(int n, int a)
{
	if (a >= n && n > 1)
	{
		return (1);
	}
	else if (n % a == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (division(n, a + 1));
}
