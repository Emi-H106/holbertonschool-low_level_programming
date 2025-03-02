#include "main.h"

/**
 *  *string_toupper - changes all lowercase letters of a string to uppercase
 * @str: a string
 * Return: a string uppercase
 */


char *string_toupper(char *str)
{
	char *a = str;
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			*a = *a - 32;
		}
	a++;
	}
	return (str);
}
