#include "dog.h"
#include <stdio.h>

/*
*print_dog - Prints all the data of a dog
* @d: A dog structure
*
* Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
{
		{
		if (Name = NULL )
			{
			printf("Name: (nil)", d->name);
			}
		else
			{
			printf("Name: %s\n", d->name);
			}

		}
		{
		if (Age = NULL)
			{
			printf("Age: (nil)", d->age);
			}
		else
			{
			printf("Age: %f\n", d->age);
			}
		}

		{
		if (Owner = NULL)
			{
			printf("Owner: (nil)", d->owner);
			}
		else
			{
			printf("Owner: %s\n", d->owner);
			}
		}
}
}
