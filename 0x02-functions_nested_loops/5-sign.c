#include "main.h"

/**
 * print_sign - checking the sign of a number
 * @n: The character to be checked
 * Return: 1 for positive, -1 for negative and 0 for otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
