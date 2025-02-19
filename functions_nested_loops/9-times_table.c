#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j = i * 9;

	for (i = 0; i <= 9; i++)
	{
		_putchar((i * 9) + '0');
		
			if (j / 9 == 9)
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
