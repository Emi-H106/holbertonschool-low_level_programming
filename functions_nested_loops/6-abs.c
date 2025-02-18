#include <stdio.h>
#include "main.h"

/**
 * _abs - Display the absolute value of an integer
 *@n: Required. Specifies a number.
 * Return: n or -n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
