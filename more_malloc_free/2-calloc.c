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
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	else
	{
		ptr = 0;
		return (ptr);
	}
}
