#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument array value
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int a = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			if (!isdigit(*argv[a]))
			{
				printf("Error\n");
			}
			else
			{
				sum += atoi(argv[a]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
