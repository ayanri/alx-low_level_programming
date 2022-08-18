#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: unsigned long int data input
 * @index: index, starting from 0 of bit to set
 *
 * Return: 1 on success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > 63)
		return (-1);

	clear = 1 << index;
	*n &= ~(clear);
	return (1);
}
