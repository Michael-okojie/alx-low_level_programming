#include "main.h"

/**
 * _strncpy - function that copies a string
 *@dest: the destination string
 *@src: the source string
 *@n: the number of bytes it will use
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0, index = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
