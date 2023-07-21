#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters
 * @n: amount of the arguements
 *
 * Return: the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list sums;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(sums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sums, int);
	}

	va_end(sums);

	return (sum);
}
