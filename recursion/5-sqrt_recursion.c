#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: returns the natural square root of a number
 */


int _sqrt_recursion(int n, int i)
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
		return (_sqrt_recursion(n, i + 1));
	}
}
