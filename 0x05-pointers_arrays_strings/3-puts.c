#include "main.h"

/**
 * _puts - function that prints a string
 * @str: the string to be printed
 * Retun: Always 0.
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
