#include "main.h"


int is_prime_number2(int n, int d);

/**
 * is_prime_number2 - check if number is prime number
 * @n: the number for check
 * @d: divisor
 * Return: if the number is prime number 1,otherwise 0
 */


int is_prime_number2(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}

	return (is_prime_number2(n, d + 2));
}

/**
 * is_prime_number - check if number is prime number
 * @n : the number for check
 * Return: if the number is prime number 1,otherwise 0
 */


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}

	return (is_prime_number2(n, 3));
}
