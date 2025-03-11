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
	int i, j, k;

	if (s1 == NULL) s1 = "";

	if (s2 == NULL) s2 = "";

	i = 0;

	while (s1[i] != '\0') i++;

	j = 0;

	while (s2[j] != '\0') j++;

	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL) return (NULL);

	for (k = 0; k < i; k++) str[k] = s1[k];

	for (k = 0; k < j; k++) str[i + k] = s2[k];

	str[i + j] = '\0';
	return (str);
}
