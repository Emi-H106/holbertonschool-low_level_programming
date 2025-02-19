#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @i: int type
 * Return: void
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i * 0) + '0');
		_putchar((i * 1) + '0');
		_putchar((i * 2) + '0');
		_putchar((i * 3) + '0');
		_putchar((i * 4) + '0');
		_putchar((i * 5) + '0');
		_putchar((i * 6) + '0');
		_putchar((i * 7) + '0');
		_putchar((i * 8) + '0');
		_putchar((i * 9) + '0');

			if ((i * 9) / 9 == 9)
			{
				_putchar('\n');
			}

			else
			{
				_putchar(' ');
				_putchar(',');
			}
	}
}
