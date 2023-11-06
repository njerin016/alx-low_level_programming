#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dog's specs
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
