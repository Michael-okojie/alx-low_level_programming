#include "main.h"

/**
 * _isdigit - Checks if a character is a digit ir not
 * @c: character to be checked
 * Return: returns 1 if it is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
