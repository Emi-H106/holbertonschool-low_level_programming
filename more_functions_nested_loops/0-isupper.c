#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int
 * Return: 1 if c is uppercase, 0 otherwise
 */


int _isupper(int c)
{
	for (c = 65; c <= 90; c++)
		return (1);

	for (c = 97; c <= 122; c++)
		return (0);
}
