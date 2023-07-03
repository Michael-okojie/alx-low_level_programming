#include "main.h"
/**
 * _strpbrk - function that searches for
 * any string in any set of bytes
 * @s: the string to search
 * @accept: the bytes in the substring
 * Return: pointer to the byte s
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
