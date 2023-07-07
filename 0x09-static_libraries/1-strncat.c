#include "main.h"

/**
 * _strncat - concatenates two strings with at most n bytes from src
 *@dest: the destination string
 *@src: the source string
 *@n: the number of bytes it will use
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, index = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
