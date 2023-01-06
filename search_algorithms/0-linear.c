#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - searche a value in an array of integers using the Linear search algorithm
* @array: is a pointer to the first element of the array
* @size: the number of elements in array
* @value: is the value to search for
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
