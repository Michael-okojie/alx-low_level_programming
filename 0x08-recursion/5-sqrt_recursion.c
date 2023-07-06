#include "main.h"
/**
 * sqrt_a - function that returns the natural squareroot of a number
 * @a: the number to check for the square root
 * @b: the second number
 * Return: the natural square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - function that returns the natural squareroot of a number
 * @n: the number to check for the square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
