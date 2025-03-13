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
		printf("Name: (nil)");
		printf("Age: (nil)");
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
