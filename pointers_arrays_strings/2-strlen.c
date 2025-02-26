#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:a string 
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s++)
	{
		c++;
	}

	return (c);
}
