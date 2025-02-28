#include "main.h"


/**
 * *_strcpy - copies the string pointed
 * @dest: Pointer to the destination character array where the content
 * is to be copied.
 * @src: Pointer to the source character array which is to be copied.
 * Return: The pointer to dest string
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
