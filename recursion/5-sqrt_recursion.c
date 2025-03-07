#include "main.h"

/**
 * _sqrt_1 - check the number from base number
 * @n: the number
 * @i: base number of check
 * Return: the natural square root of a number
 */


int _sqrt_1(int n, int i)
{

	if ((n * n) > i)
	{
		return (-1);
	}
	else if ((n * n) == i)
	{
		return (n);
	}
	else
	{
		return (_sqrt_1(n + 1, i));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of a number
 */


int _sqrt_recursion(int n)
{
	return (_sqrt_1(1, n));
}
