#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 *@a: the array to be accessed
 *@n: Number of elements to be printed
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
