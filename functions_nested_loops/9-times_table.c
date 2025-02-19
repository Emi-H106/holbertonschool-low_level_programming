#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @i: int type
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
	{
		int n = i * j
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');

		if (n / 9 == 9)
		{
			_putchar('\n);
		}
		else
		{
			_putchar(' ');
			_putchar(',');
		}

	}
}
