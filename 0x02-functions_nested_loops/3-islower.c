#include "main.h"

/**
 * _islower - checking if an alphabet is lowercase or not
 * @c: The character to be checked 
 * Return: Always 1 for lowercase and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
