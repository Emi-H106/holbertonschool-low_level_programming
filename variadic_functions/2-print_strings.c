#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_strings -  prints strings
 * @separator: the string to be printed between the strings
 * @n: number of arguments
 * Return: prints strings
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(strings, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
