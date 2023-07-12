#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional grid of arrays
 * @width: the width
 * @height: the height of the array
 * Return: the grid
*/

int **alloc_grid(int width, int height)
{
	/*Check if width or height is 0 or negative*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*Allocate memory for the 2-dimensional array*/
	int **grid = malloc(sizeof(int) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	/*Allocate memory for each row and initialize elements to 0*/
	for (int i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			/*Free previously allocated memory if allocation fails*/
			for (int j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/*Initialize elements to 0*/
		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
