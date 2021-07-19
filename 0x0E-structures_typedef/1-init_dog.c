#include "dog.h"

/**
 * init_dog - will initialize a dog structure
 * @d: the dog structure to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: doesn't
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!(d && name && owner))
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
