#include "function_pointers.h"
#include <stdio.h>
/*
* int_index - searches for an integer
* @array: array to search in
* @size: size of the array
* @cmp : pointer to the comparing function
* return : index of the first element for which the cmp function does not return 0 or -1 if no match is found or size is negative
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
