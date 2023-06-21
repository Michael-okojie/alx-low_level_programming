#include "main.h"

/**
 * times_table - prints the nine times table starting with zero
 * Return: returns nine times table starting with zero
 */

void times_table(void)
{
	int i, j, result, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result > 9)
			{
				k = result % 10;
				l = (result - k) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(l + '0');
				_putchar(k + '0');

			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
