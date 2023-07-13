#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: Second String
 * @n: Number of bytes
 * Return: the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, length;
	unsigned int i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (n >= length2)
		n = length2;

	length = length1 + n;

	concatenated = malloc((length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);


	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
