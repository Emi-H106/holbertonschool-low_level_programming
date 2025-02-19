#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;
	int k = i * 9

	for (i = 0; i <= 9; i++ && j = 0; j <= 9; j++)
	{
		_putchar((i * j) + '0');
		
			if (k / 9 == 9)
			{
				_putchar(' ');
				_putchar(',');
			}

			else
			{
				_putchar('\n');
			}
	}
}
