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
	int result;

	for (n = 0; s[n] != '0'; n++)
	{
		if (s[n] == '-')
		{
			sign++;
		}
	if (s[n] >= 48 && s[n] <= 57)
	{
		while (s[n] >= 48 && s[n] <= 57)
		{
			result = result * 10 - (s[n] - '0');
			break;
		}
	}
	}
	return (result * sign);
}
