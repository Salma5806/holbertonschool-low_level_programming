#include "function_pointers.h"
#include <stdio.h>

/*
* array_iterator - executes a functon given as a parameter on each elem of an array
* @size: the size of the array
* @action: pointer to function used
* @array : array to iterate over
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size > 0 && action != NULL && array != NULL)
	{
		 for (i = 0; i < size; i++)
			action(array[i]);
	}
}
