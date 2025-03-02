#include "main.h"


/**
 * *cap_string - capitalizes all words of a string
 * @str: a string
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int capitalize_first = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '(' || str[i] == ')' ||
		str[i] == '{' || str[i] == '}' || str[i] == '\t' || str[i] == '\n')
		{
			capitalize_first = 1;
		}
		else if (capitalize_first)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			capitalize_first = 0;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
	}
		return (str);
}
