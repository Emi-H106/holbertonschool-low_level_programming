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
	int i;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	printf("\n");
	va_end(strings);
}
