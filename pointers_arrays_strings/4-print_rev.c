#include "main.h"


/**
 * print_rev - prints a string in reverse
 * @s: a string
 * Return: void
 */

void print_rev(char *s)
{
	char *end = s, temp;

	while (*end)
	{
		end++;
	}
	end--;

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;

		s++;
		end--;
	}
}
