#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number
 * Return: void
 */


void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n < 98; n++)
		{
			if (n < 10)
			{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			}

			else
			{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			}
		}
		if (n == 98)
		{
		_putchar((n / 10) + '0');
		}
	}
	else if (n > 98)
	{
		for (n = 0; n > 98; n--)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}

		}
	}
	_putchar('\n');	
}
