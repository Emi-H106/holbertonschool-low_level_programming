#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character
 * Return: void
 */

void print_diagonal(int n)
{
	int a = 1;

	if (n > 0)
	{
		while (a <= n)
		{
			 _putchar('\');
			 _putchar('\n');
			 _putchar(' ');
			 a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
