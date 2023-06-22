#include <stdio.h>

/**
 * main - Fizzbuz test
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int fizz = i % 3;
		int buzz = i % 5;

		if (fizz == 0)
		{
			printf("Fizz");

		}
		else if (buzz == 0)
		{
			printf("Buzz");
		}
		else if (buzz == 0 && fizz == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
