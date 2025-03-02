#include "main.h"


/**
 * *cap_string - capitalizes all words of a string
 * @str: a string
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == ','|| str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '(' || str[i] == ')' ||
		str[i] == '{' || str[i] == '}')
		{
			n = 1;
		}


