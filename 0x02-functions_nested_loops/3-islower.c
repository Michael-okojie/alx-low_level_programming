#include "main.h"

/**
 * _islower - checking if an alphabet is lowercase or not
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 112)
	{
		return (1);
	}
	return (0);
}
