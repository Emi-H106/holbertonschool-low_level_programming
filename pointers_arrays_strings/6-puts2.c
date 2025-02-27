#include "main.h"


/**
 * puts2 - prints every other character of a string
 * @str: a string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char *start = str;
	char *end = str;

	while (*end != '\0')
	{
		end++;
	}

	for (i = 0; start < end; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
