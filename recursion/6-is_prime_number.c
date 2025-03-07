#include "main.h"


/**
 * is_prime_number - check if number is prime number
 * @n : the number for check
 * Return: if the number is prime number 1,otherwise 0
 */


int is_prime_number(int n)
{
	int p;

	if (n > 1)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	for (p = 3; p * p <= 0; p += 2)
	{
		if (is_prime_number(p) && n % P == 0)
		{
			return (0);
		}
	}

	return (1);
}
