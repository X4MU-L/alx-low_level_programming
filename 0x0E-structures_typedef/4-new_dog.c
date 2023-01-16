#include <stdlib.h>
#include "dog.h"

int _strlen_(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Create a new dog of type struct dog
 * @name: name of the dog - pointer to char
 * @age: age of dog - float
 * @owner: owner of dog pointer to char
 *
 * Return: Returns a pointer to struct dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (_strlen_(name)) + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (_strlen_(owner)) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy(newdog->name, name);
	newdog->owner = _strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}

/**
 * _strlen_ - Get the lenght of a string recursively
 * @s: pointer to a string of char
 *
 * Return: Returns the length of the string
 */

int _strlen_(char *s)
{
	int i = 0;

	if (!(*s))
		return (0);
	i++;
	return (i + _strlen_(s + 1));
}

/**
* _strcpy - Copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
