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
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				j = 0
			}
		}

		if (accept[j] != s[i])
		{
			break;
		}

	return (i);
}
