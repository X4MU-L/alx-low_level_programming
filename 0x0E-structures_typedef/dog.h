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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
