#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return: the result
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int result = 0;

	va_list sum;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}
	va_end(sum);

	return (result);
}
