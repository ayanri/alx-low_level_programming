#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int data input
 * @index: index, starting from bit you want
 *
 * Return: value of bit at index, else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
