#include "main.h"


/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The base of the power operation.
 * @y: The exponent of the power operation
 * Return:  the result of a power operation
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
