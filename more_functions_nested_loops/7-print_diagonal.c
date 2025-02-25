#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a ; b++)
			{
				if (b == a)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			 _putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
