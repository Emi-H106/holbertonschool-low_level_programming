#include "main.h"

/**
 * _sqrt_1 - returns the natural square root of a number
 * @n: the number
 * @i: 
 * Return:
 */

/**
 *_sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: returns the natural square root of a number
 */




int _sqrt_1(int n, int i)
{

	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (n);
	}
	else
	{
		return (_sqrt_1(n, i + 1));
	}
}


int _sqrt_recursion(int n)
{
	return (_sqrt_1(1, n));
}
