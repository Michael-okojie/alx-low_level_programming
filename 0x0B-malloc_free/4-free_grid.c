#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the grig input
 * @height: the height of the grid
 * Return: null
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	/*Free each row of the grid*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/*Free the grid itself*/
	free(grid);
}
