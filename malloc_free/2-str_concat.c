#include <stdlib.h>
#include "main.h"


/**
 * *str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: a pointer of the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i])
	{
		i++;
	}

	while (s2[j])
	{
		j++;
	}

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);

}
