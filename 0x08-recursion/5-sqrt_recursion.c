#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - find square root
 * @n: int
 * @a: square root
 *
 * Return: int
 */

int sq(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n)
	{
		return (sq(n, a + 1));
	}
	else
		return (-1);
}
