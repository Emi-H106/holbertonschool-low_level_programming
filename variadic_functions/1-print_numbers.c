#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 * Return: prints numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	separator = va_arg(numbers, i);

	if (separator == NULL)
	{
		;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d ", va_arg(numbers, i));
	}
	printf("\n");
	va_end(numbers);

	return (0);
}
