#include "main.h"

/**
 * _puts - prints a string
 * @str: a string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
