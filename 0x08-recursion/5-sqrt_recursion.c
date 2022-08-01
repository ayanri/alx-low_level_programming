#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - find square root recursion
 * @n: int
 * @a: square root
 *
 * Return: int
 */

int _sqrt(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n)
	{
		return (_sqrt(n, a + 1));
	}
	else
		return (-1);
}
