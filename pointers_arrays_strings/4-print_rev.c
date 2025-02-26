#include "main.h"


/**
 * print_rev - prints a string in reverse
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
