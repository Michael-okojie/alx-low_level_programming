#include "main.h"
/**
 * leet - function that encodes a string
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char k[] = "aAeEoOtTlL";
	char l[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; k[j] != '\0'; j++)
		{
			if (str[i] == k[j])
			{
				str[i] = l[j];
			}
		}
	}
	return (str);
}
