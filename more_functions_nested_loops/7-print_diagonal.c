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
			 _putchar('92');
			 _putchar('\n');
			 _putch('32');
			 a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
