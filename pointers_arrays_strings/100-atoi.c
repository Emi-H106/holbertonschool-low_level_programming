#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: The string that is to be converted to an integer
 * Return: integer value,If the conversion is not valid,returns 0.
 */


int _atoi(char *s)
{
	int n = 0;

	while (n != '\0')
	{
		s[(n++)];
	}

		if (n >= 48 && n <= 57)
		{
			_putchar(s[n] + '0');
		}
		else
		{
			return (0);
		}
	_putchar('\n');
}
