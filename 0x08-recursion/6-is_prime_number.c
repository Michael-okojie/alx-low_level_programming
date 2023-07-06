#include "main.h"
/**
 * prime_a - this was voundl
 * @a: input
 * @b: input
 * Return: 0
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - recursive function to check if a
 *  number is a prime number or not
 * @n: number to be checked
 * Return: if its prim eor not
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
