#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_all -  prints anything
 * @format: types of arguments
 * Return: prints anything
 */


void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	const char *ptr = format;

	while (*ptr)
	{
		if (format == 'c')
		{
			printf("%c", va_arg(args, char);
		}
		else if (format == 'i')
		{
			printf("%d", va_arg(args, int);
		}
		else if (format == 'f')
		{
			printf("%f", va_arg(args, double);
		}
		else if (format == 's')
		{
			*str = format;

			if (str == NULL)
			{
				printf("(nill)");
			}
			printf("%s", va_arg(args, char);
		}
	var_end(args);
	printf("\n");
}
