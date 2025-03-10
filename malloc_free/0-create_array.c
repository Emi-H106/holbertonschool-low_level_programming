#include <stdio.h>
#include <stdlib.h>

/**
 * main - creates an array of chars, and initializes it with a specific char
 * @size: size of an array
 * @c: an array
 * Return: an array
 */


char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		c = (int*)malloc(size * sizeof(char));
		return (*c);
	}
	else
	{
		return (NULL);
	}
}

