#include "main.h"


/**
 * puts2 - prints every other character of a string
 * @str: a string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char *end = str;

	while (str[i] != '\0')
	{
		i++;
	}

	for (i = 0; str < end; i += 2)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
