#include "main.h"


/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	char *end;
	char tmp = *s;

	while (s < end)
	{
		*s = *end;
		*end = tmp;
		s++;
		end--;
	}
}
