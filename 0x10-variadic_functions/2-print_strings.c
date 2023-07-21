#include "variadic_functions.h"

/**
 * print_strings - prints strings in a variadic
 * function parameter.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strings, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);
}
