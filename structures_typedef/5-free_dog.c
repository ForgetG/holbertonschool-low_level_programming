#include "dog.h"

/**
 * free_dog - free all malloc of struct dog.
 * @d: struct dog.
 */

void	free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
