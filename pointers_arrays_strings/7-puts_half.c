#include "main.h"


/**
 * puts_half - prints half of a string
 * @str: a string
 * Return: void
 */


void puts_half(char *str)
{
	int length_of_the_string = 0;
	int mid, n;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	

		if (length_of_the_string % 2 == 0)
		{
			mid = length_of_the_string / 2;

			for (n = mid; n < length_of_the_string; n++)
			{
				_putchar(str[n]);
			}
		}
		else
		{
			mid = (length_of_the_string + 1) / 2;

			for (n = mid; n < length_of_the_string; n++)
			{
				_putchar(str[n]);
			}
		}
	}
		_putchar('\n');
}
