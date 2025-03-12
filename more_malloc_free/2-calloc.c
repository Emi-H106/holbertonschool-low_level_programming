#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements
 * @size: the size of each element in bytes
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char ptr2;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	*ptr2 = (unsigned char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		ptr2[i] = 0;

	}
	return (ptr);
}
