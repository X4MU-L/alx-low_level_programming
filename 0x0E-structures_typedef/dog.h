#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a structure for dog type
 * @name: pointer to char
 * @owner: pointer to char
 * @age: float
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
