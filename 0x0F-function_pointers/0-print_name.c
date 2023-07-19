#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name it prints
 * @f: is pointer to the function
 * Return: nil
**/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
