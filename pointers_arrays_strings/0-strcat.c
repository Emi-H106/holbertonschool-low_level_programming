#include "main.h"


/**
 * *_strcat - concatenates two strings
 * @dest: a pointer to the destination array
 * @src: the string to be appended
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;

	while (*temp)
	{
		temp++;
	}

	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';
	temp = dest;

	return (dest);
}
