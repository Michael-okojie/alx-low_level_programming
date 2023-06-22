#include "main.h"

/**
 * print_most_numbers - Printing numbers from 0-9 except 2 and 4 using putchar
 *
 * Return: returns 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
