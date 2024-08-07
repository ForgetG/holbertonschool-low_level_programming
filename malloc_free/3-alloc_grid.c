#include "main.h"

/**
 * alloc_grid - allocates memory for a 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array
 * Return: grid or NULL
 */

int	**alloc_grid(int width, int height)
{
	int	**grid;
	int	i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
