#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character
 * Return: void
 */

void print_diagonal(int n)
{
	int a = 1;
	int b;

	if (n > 0)
	{
		while (a <= n)
		{
			for (b = 0; b <= a ; b++)
			{
				_putchar(32);
			}
			 _putchar(92);
			 _putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
