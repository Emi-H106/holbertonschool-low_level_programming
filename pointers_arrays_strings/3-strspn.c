#include "main.h"
#include <stdio.h>


/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: the number of bytes in the initial segment of s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int same_caracter;

	for (i = 0; s[i] != '\0'; i++)
	{
		same_caracter = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				same_caracter = 1;
				break;
			}
		}

		if (same_caracter == 0)
		{
			break;
		}
	}

	return (i);
}
