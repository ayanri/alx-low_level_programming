#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string pointer
 *
 * Return: converted number, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	while (b && *b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		conv_num = conv_num << 1;
		conv_num = conv_num | (*b - '0');
		b++;
	}
	return (conv_num);
}
