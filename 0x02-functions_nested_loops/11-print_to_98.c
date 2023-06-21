#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print_to_98
 * @n: number we print from
 * Return: returns nine times table starting with zero
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{

		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);

			if (i == 98)
			{
				printf("%d", i);
				break;
			}
		}
	}

	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);

			if (i == 98)
			{
				printf("%d", i);
				break;
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
