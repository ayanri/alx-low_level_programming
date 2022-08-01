#include <stdio.h>

#define FILE_NAME __FILE__

/**
 * main - prints the name of the file it was compiled from followed by new line
 *
 * Return: Always 0 (on success)
 */

int main(void)
{
	printf("%s\n", FILE_NAME);
	return (0);
}
