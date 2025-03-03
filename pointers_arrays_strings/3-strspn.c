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
	unsigned int count = 0;
	char *tmp;

	while (*s)
	{
		*tmp = accept;

		while (*tmp)
		{
			if (*s == *tmp)
			{
				count++;
				break;
			}
			tmp++;
		}

		if (!*tmp)
		{
			break
		}
		s++;
	}

	return (count);
}
