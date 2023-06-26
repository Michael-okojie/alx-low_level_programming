#include "main.h"

/**
 * swap_int - swapping integer values
 *@a: integer to swap
 *@b: integer to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int pp;

	pp = *a;
	*a = *b;
	*b = pp;
}
