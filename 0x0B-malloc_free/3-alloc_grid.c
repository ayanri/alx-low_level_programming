#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: grid width
 * @height: grid height
 *
 * Return: Pointer to array, else NULL
 */

int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **grid;

	a = 0;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (a < height)
	{
		grid[a] = malloc(width * sizeof(**grid));
		if (grid[a] == NULL)
		{
			a--;
			while (a >= 0)
			{
				free(grid[a]);
				a--;
			}
			free(grid);
			return (NULL);
		}
		b = 0;
		while (b < width)
		{
			grid[a][b] = 0;
			b++;
		}
		a++;
	}
	a = 0;
	return (grid);
}
