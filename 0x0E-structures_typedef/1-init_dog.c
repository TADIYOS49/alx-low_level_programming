#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize the elements in the dog struct
 * @d: pointer to struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
