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

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	pup = malloc(sizeof(dog_t));
	if (!pup)
		return (NULL);

	pup->name = malloc(sizeof(name));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}
	pup->owner = malloc(sizeof(owner));
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}
	pup->age = age;
	_strcpy(pup->name, name);
	_strcpy(pup->owner, owner);
	return (pup);
}

/**
 * _strcpy - will copy a string to a destination buffer
 * @dest: destination string
 * @src: string to be copied from
 *
 * Return: pointer to dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (!(dest) || !(src))
		return (0);

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = src[i];
	}
		*(dest + i) = '\0';

	return (dest);
}
