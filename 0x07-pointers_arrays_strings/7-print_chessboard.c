#include "mmain.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int m;
	int n;

	for (m = 0; a[m][7]; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}

		_putchar('\n');
	}
}
