#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a stracture
 * @d: a pointer of the stracture
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age ==  NULL)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
