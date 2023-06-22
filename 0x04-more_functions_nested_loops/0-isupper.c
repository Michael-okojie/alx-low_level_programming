#include "main.h"

/**
 * _isupper - checks if a letter is uppercase or lowercase
 *@c: the charater
 * Return: returns 1 ic c is upper otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
