#include <stdio.h>

/**
 * main - prints number of argumnet passed into it
 * @argc: argument count
 * @argv: argument array value
 *
 * Return: O (On success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
