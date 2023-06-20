#include "main.h"

/**
 * print_alphabet - printing the alphabets
 *
 * Return: Always void.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
