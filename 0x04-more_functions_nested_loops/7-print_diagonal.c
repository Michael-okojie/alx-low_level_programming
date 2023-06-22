#include  "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *@n: represents the number of times the character \ is to be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
