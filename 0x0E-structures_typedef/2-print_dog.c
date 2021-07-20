#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - will print dog information to standard output
 * @d: dog to print information on
 *
 * Return: doesn't
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!(d->name == NULL))
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (!(d->age == NULL) && d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (!(d->owner == NULL))
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");

}
