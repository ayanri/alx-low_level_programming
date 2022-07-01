#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int C;

	for (C = 'a'; C <= 'z'; C++)
	{
		C = tolower(C);
		putchar(C);
	}
	putchar('\n');
	return (0);
}

