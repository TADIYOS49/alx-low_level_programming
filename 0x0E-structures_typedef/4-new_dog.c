#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates new dog object
 * @name: string
 * @age: float
 * @owner: string
 * Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name1, *owner1;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name1 = strdup(name);
	if (name1 == NULL)
	{
		free(name1);
		return (NULL);
	}

	owner1 = owner;
	if (owner1 == NULL)
	{
		free(owner1);
		return (NULL);
	}

	dog->name = name1;
	dog->age = age;
	dog->owner = owner1;
	return (dog);
}
