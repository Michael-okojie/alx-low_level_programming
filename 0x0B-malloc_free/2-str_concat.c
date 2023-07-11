#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function to concatenate two strings
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * Return: the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, length1, length2;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
    if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	concatenated = malloc(sizeof(char) * (length1 + length2 + 1));

	for (i = 0; i < length1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (i = 0; i < length2; i++)
	{
		concatenated[length1 + i] = s2[i];
	}

	concatenated[length1 + length2] = '\0';

	return (concatenated);

}
