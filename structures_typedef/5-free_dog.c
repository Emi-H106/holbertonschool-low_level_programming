#include <string.h>
#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - frees the memory allocated for
 *            a structure of type dog_t.
 * @d:a pointer of dog_t
 * Return:void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		;
	}

	if (d->name != NULL)
	{
		free(d->name);
	}

	if (d->owner != NULL)
	{
		free(d->owner);
	}

	if (d != NULL)
	{
		free(d);
	}
}
