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
	n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}

	dest[n] = '\0';
	return (dest);
}
