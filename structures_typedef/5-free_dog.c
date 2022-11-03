#include "dog.h"
#include <stdio.h>

/*
* free_dog - frees dog
* @d: pointer
*/
void free_dog(dog_t *d)
{
 	if(d != NULL)
	{
		free((d->name) = name);
		free((d->age) = age);
		free((d->owner) = owner);
	}
}
