#include "main.h"


/**
 * *_memcpy - copies memory area
 * @dest: a pointer to the memory location where the copied data will be stored
 * @src: a pointer to the memory location from where the data is to be copied
 * @n: The number of bytes to be copied
 * Return: a pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *tmp;

	for (i = 0; i < n; i++)
	{
		*tmp = src;
		*dest = tmp;
	}
	return (dest);
}
