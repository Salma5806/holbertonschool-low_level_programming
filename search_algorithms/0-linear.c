#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - searche a value in an array of integers
* @array: is a pointer to the first element of the array
* @size: the number of elements in array
* @value: is the value to search for
* Return : if the value not present  or the array is null return -1.
* otherwise, the first index where the value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
