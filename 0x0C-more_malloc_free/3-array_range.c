#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an arrray of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
