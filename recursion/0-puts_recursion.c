#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: a string
 * Return: void
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
