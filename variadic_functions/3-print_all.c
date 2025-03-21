#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char -  prints char
 * @ap: argument pointer
 * Return: void
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int -  prints int
 * @ap: argument pointer
 * Return: void
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float -  prints float
 * @ap: argument pointer
 * Return: void
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string -  prints string
 * @ap: argument pointer
 * Return: void
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s != NULL)
	{
		printf("(nil)");
	}
	printf("%s", s);
}


/**
 * print_all -  prints anything
 * @format: types of arguments
 * Return: void
 */


void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list ap;
	char *separator = "";
	int i = 0;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		int j = 0;

		while (types[j].type != NULL)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
