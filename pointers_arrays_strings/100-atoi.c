#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: The string that is to be converted to an integer
 * Return: integer value,If the conversion is not valid,returns 0.
 */


int _atoi(char *s)
{
	int i, j, k = 0;
	int sign = 1;
	int result;

	while (s[i] != '\0')
	{
		i++;
	}

	for (; j < i; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			k = k * 10 + (s[j] - '0');
			result = 1;
		}
		else if (s[j] == '-')
		{
			sign = -sign;
		}
		else if (result == 1)
		{
			break;
		}
	}
	return (result * sign);
}
