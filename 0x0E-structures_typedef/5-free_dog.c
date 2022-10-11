#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free the object memory
 * @d: struct 
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
