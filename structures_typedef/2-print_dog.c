#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a stracture
 * @d: a pointer of the stracture
 * Return: void
 */

void print_dog(struct dog *d)
{
	int i;

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < 3; i++)
	{
		if (d[i] == NULL)
		{
			printf("if name is NULL, print Name: (nil)");
		}
		printf("Name: %s\n", d[0]);
		printf("Age: %d\n", d[1]);
		printf("Owner: %s\n", d[2]);
	}
}
