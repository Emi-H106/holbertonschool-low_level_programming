#include "main.h"

/**
 * _puts - prints a string
 * @str: a string
 * Return: void
 */

void _puts(char *str)
{
	int i;
	*str = &(str[0]);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
