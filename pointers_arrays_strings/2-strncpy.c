#include "main.h"


/**
 * *_strncpy - copies a string
 * @dest: A pointer to the destination array
 * @src: A pointer to the source string
 * @n: The number of characters
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
