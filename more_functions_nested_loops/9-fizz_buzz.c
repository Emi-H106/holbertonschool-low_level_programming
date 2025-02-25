#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 1)
		{
			printf("1");
		}
		if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		if (n % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		printf(" %d", n);
	}
	return (0);
}
