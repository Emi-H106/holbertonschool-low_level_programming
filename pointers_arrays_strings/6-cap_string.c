#include "main.h"


/**
 * *cap_string - capitalizes all words of a string
 * @str: a string
 * Return: str
 */

char *cap_string(char *str)
{
	char *a = str;
	int i = 0;

	while (*a = '\0')
	{
		if (a[i - 1] == 32 && a[i] >= 97 && a[i] <= 122)
		{
			*a = *a - 32;
		}
		a++;
	}
	return (str);
}
