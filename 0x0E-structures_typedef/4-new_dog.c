#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - will create and initialize a dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: who owns the new dog
 *
 * Return: a pointer to the created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	if (!name || !owner || age < 0)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (!pup)
		return (NULL);
	pup->name = name;
	pup->age = age;
	pup->owner = owner;

	return (pup);
}
