#include "main.h"


/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	char *end = s;
	char tmp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (s =< end)
	{
		tmp = *s;
		*s = *end;
		*end = tmp;
		end--;
	}
}
