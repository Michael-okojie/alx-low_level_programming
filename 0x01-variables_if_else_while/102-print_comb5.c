#include <stdio.h>

/**
 * main - Printing combination of two double digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
			}

			if (j != i)
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
