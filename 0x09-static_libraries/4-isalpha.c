#include "main.h"

/**
 * _isalpha - checking if an alphabet is an alphabet or not
 * @c: The character to be checked
 * Return: Returns 1 if c is a letter, otherwise returns 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
