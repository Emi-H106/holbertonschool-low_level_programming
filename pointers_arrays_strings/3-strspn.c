#include "main.h"
#include <stddef.h>


/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: the number of bytes in the initial segment of s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*s != '\0')
	{
		if (s[i] == accept[j])
		{
			return (j);
		}
	}

	return (0);
}
