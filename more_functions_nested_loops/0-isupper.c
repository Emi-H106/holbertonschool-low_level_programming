#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int
 * Return: 1 if c is uppercase, 0 otherwise
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else if (c >= 97 && c <= 122)
	{
		return (0);
	}

	else
	{
		return (0);
	}

}
