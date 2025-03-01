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
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0' && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';
	*temp = dest;

	return (dest);
}
