#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the values of a struct dog
 * @d: pointer to a struct dog type
 *
 * Return: Returns void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if(d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if(d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if(d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Age: (nil)\n");
}
