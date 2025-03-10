#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it :qw
 * @size: size of an array
 * @c: an array
 * Return: an array
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	 *array  = (char *)malloc(size * sizeof(c));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
