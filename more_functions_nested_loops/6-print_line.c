#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	else
	{
		_putchar('\n');
	}

	_putchar('\n');
}
