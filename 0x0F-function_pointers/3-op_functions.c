#include "3-calc.h"

/**
 * op_add - addition operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: difference of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: product of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: result of the division of two integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder operator
 * @a: integer 1
 * @b: integer 2
 *
 * Return: remainder of the divison of two integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
