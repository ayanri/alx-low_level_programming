#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: unsigned long int data input
 * @m: unsigned long int unit position
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int unit_pos;
	unsigned int flipped_bits;

	unit_pos = n ^ m;
	flipped_bits = 0;

	for (flipped_bits = 0; unit_pos; unit_pos >>= 1)
	{
		if (unit_pos & 1)
		{
			flipped_bits++;
		}
	}
	return (flipped_bits);
}
