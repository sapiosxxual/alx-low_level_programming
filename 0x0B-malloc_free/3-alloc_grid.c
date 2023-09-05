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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	*grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
