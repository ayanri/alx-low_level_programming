#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabets
*/

void print_alphabet_x10(void)
{
	int a;
	int z;

	for (z = 0; z < 10; z++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
