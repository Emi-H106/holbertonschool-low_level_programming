#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *            which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: a pointer
 */


char *_strdup(char *str)
{
	int length = 0;
	char *str2;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != 0)
	{
		length++;
	}

	str2 = malloc(sizeof(char) * length + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		str2[i] = str[i];
	}

	str2[i] = '\0';

	return (str2);
}
