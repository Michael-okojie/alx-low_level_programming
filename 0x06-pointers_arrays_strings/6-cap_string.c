#include "main.h"

/**
 * cap_string - capitalizes the strings in a sentence
 * @str: string to be capitalized
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int index = 0, capitalize_next = 1;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (capitalize_next && (str[index] >= 'a' && str[index] <= 'z'))
		{
			str[index] = str[index] - 32;
		}

		if (str[index] == ' ' || str[index] == '\t' ||
		str[index] == '\n' || str[index] == ',' ||
		str[index] == ';' || str[index] == '.' ||
		str[index] == '!' || str[index] == '"' ||
		str[index] == '?' || str[index] == '(' ||
		str[index] == ')' || str[index] == '{' ||
		str[index] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
	}
	return (str);
}
