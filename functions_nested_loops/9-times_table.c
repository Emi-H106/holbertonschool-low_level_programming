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
		int k = i * j;

		if(k <= 8)
		{
			_putchar(k + '0');
			_putchar(' ');
			_putchar(',');
		}

		else if (j == 9)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
		}
		else
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(' ');
			_putchar(',');
		}

	}
}
