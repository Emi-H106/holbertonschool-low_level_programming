#include "main.h"

/**
 *  *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: a string
 * Return: a string uppercase
 */


char *string_toupper(char *str)
{
	char *a = str;

	while (*a != '\0')
	{
		if (*a >= 97 && *a <= 122)
		{
			*a = *a - 32;
		}
	a++;
	}
	return (str);
}
