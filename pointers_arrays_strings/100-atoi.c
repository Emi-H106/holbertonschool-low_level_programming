#include "main.h"


/**
 * _atoi - convert a string to an integer
 * @s: The string that is to be converted to an integer
 * Return: integer value,If the conversion is not valid,returns 0.
 */


int _atoi(char *s)
{
	int i = 0, j, n = 0, x = 1;

	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
	{
		x *= -1;
	}
		i++;
	}

	j = i;

	while ((s[j] >= '0') && (s[j] <= '9'))
	{
	n = (n * 10) + x * ((s[j]) - '0');
	j++;
	}
	return (n);
}
