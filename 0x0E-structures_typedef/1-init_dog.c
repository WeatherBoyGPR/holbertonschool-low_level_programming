#include "dog.h"

/**
*init_dog - makes "the dog"
*@d: the structure for "the dog"
*@name: the name of "the dog"
*@age: the length of time that "the dog" has existed for
*@owner: who owns "the dog"
*
*Returns: it well, doesn't
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
