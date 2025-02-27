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

	while (*end != '\0')
	{
		end++;
	}
	end--;

		for (i = 0; str < end; i += 2)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
