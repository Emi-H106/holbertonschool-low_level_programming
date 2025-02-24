#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character
 * Return: void
 */

void print_line(int n)
{
	for (n = 0; n >= 1; n++)
	{
		if (n == 0 && n < 0)
		{
			_putchar('\n');
		}
		else if(n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
