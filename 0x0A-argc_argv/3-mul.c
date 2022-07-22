#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the arguments
 * @argc: argument count
 * @argv: argument array value
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
