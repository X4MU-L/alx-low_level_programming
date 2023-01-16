#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog with values
 *
 * @d: pointer to a struct dog type
 * @name: pointer to a char
 * @owner: pointer to a char
 * @age: int
 *
 * Return: Returns void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
