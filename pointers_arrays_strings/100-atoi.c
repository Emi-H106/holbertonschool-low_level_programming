#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: The string that is to be converted to an integer
 * Return: integer value,If the conversion is not valid,returns 0.
 */


int _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		s++
	}

	if (*s != '0')
	{
		do
		{
			n = n * 10 + (*s - '0');
			s++;
		}
		while (*s >= '0' && *s <= '9');
	}

	return n * sign;
}
