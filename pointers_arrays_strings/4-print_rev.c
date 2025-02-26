#include "main.h"


/**
 * print_rev - prints a string in reverse
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}

	_putchar('\n');
}
