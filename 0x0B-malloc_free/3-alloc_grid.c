#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-returns a pointer to a 2 dimensional array of integers.
 * @width: first array in 2D array
 * @height: second array in 2D array
 * Return: (0)
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}

	return (grid);
}
