#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer of struct
 * @name: name of dog
 * @age: age pf dog
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
