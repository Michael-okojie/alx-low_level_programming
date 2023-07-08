#include <stdio.h>
/**
 * main -  program that prints the number of arguments passed into it
 * @argc: is an argument counter for char
 * @argv: an array of arguements
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
