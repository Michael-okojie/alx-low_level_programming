#include <stdio.h>
/**
 * main -  program that prints its name, followed by a new line.
 * @argc: is an argument counter for char
 * @argv: is an argument value for char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
