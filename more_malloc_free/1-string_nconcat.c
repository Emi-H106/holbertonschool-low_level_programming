#include <stdlib.h>
#include "main.h"


/**
 * *string_nconcat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: 
 * Return: a pointer to a newly allocated space in memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	int k;
	char *result;

	if (s1 == NULL)
		s1 = '';

	if (s2 == NULL)
		s2 = '';

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n > j)
		n = j;

	*result = malloc(i + n + 1);

	if (result == NULL)
		return (NULL);

	for (k = 0; k < n; k++)
	{
		result(i + k) = s2[k];
	}

	result[i + n] = '\0';
	return (result);
}
