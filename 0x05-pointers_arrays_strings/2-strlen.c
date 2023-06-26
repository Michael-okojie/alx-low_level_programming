#include "main.h"

/**
 * _strlen - Function to return the length of sting
 *@s: String to count
 * Return: Always the length of string
*/
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}
	return (length);
}
