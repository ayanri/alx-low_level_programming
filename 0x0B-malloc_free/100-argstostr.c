#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments in the program
 * @ac: number of arguments
 * @av: double pointer
 *
 * Return: Pointer to new string, else NULL
 */

char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int x = 0;
	int y = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			y++;
		y++;
	}
	y++;

	s = malloc(y * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++);
	{
		for (b = 0; av[a][b]; b++);
		{
			s[x] = av[a][b];
			x++;
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';
	return (s);
}

