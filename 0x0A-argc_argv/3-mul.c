#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply the arguments
 * @argc: Argument count
 * @argv: rgument array value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
