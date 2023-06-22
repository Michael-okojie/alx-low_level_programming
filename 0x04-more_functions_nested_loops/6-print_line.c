#include  "main.h"

/**
 * print_line - draws a straight line in the terminal
 *@n: the integer represents the number of times the _ is to de printed
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar(95);
	}

	_putchar('\n');
}
