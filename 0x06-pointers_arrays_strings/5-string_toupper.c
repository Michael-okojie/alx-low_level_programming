#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters
 * of a string to uppercase
 * @str: string to be changed
 * Return: the changed string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
