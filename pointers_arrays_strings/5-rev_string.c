#include "main.h"


/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (end >= s)
	{
		end--;
	}
}
