#include <stdio.h>

/**
* main - Printing single digit base10 numbers starting from 0 Using Putchar
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
