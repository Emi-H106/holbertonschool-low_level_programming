#include "main.h"


/**
 * *_strncat - concatenates two strings
 * @dest: a pointer to the destination array,
 * @src: the string to be appended
 * @n: it will use at most n bytes
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
