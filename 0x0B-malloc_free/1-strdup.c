#include <stdlib.h>
/**
 * _strdup - function that duplicates a string and
 * returns a pointer to the duplicated string
 * @str: the string to be duplicated
 * Return: the pointer to the duplicated string
*/

char *_strdup(char *str)
{
	unsigned int length = 0;
	unsigned int i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	/*Calculate the length of the string*/
	while (str[length] != '\0')
	{
		length++;
	}

	/*Allocate memory for the duplicate string*/
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Copy the characters from the original string to the duplicate string*/
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
