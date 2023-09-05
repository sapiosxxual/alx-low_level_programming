#include "main.h"
#include <stdlib.h>
/**
 * free_grid-frees a 2 dimensional grid previously created
 * by the alloc_grid function
 * @grid: result from ourthe alloc_grid function
 * @height: numbers of rows
 * Return: (0)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
	}
	free(grid);
}
