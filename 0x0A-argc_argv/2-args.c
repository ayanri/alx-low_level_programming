#include <stdio.h>

/**
 *  main - Prints all arguments it recieves
 * @argc: argument count
 * @argv: argument array value
 *
 * Return: 0 (on success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc, a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
