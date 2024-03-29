#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a struct dog (dog_t)
 * @d: pointer to a struct dog
 *
 * Return: Returns void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
