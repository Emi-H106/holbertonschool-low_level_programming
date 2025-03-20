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
	int printed = 1;

	while (*ptr)
	{
		while (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's')
		{
			if (!printed)
			{
				printf(",");
			}
			printed = 0;

		if (*ptr == 'c')
		{
			printf("%c", va_arg(args, char));
		}
		else if (*ptr == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (*ptr == 'f')
		{
			printf("%f", va_arg(args, float));
		}
		else if (*ptr == 's')
		{
			char str = va_arg(args, char*);
			if (*str == NULL)
			{
				printf("(nill)");
			}
			else
			{
			printf("%s", va_arg(args, char));
			}
		ptr++;
		printed = 1;
		}
	va_end(args);
	printf("\n");
}
