#include <stdlib.h>
#include <stdio.h>

/**
 * isInteger - checks if s is an integer
 * @s: string to check
 *
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] < '0' || s[a] > '9')
			return (1);
		a++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument array value
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{

	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%i\n", sum);

	return (0);
}
