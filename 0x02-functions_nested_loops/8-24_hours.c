#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of 24 hours
 */
void jack_bauer(void)
{
	int g, h;

	for (g = 0; g < 24; g++)
	{
		for (h = 0; h < 60; h++)
		{
			if (g < 10)
			{
				_putchar('0');
				_putchar(g + '0');
			}
			else if (g >= 10)
			{
				_putchar((g / 10) + '0');
				_putchar((g % 10) + '0');
			}
			if (h < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(h + '0');
			}
			else if (h >= 10)
			{
				_putchar(':');
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
