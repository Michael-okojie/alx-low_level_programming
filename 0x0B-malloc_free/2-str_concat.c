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
	unsigned int size1 = 0, size2 = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
		while (*ptr++)
			size1++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			size2++;
	else
		s2 = "";

	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (ret);
}
