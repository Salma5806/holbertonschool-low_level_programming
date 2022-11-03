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
		free_dog((d->name) = name);
		free_dog((d->age) = age);
		free_dog((d->owner) = owner);
	}
}
