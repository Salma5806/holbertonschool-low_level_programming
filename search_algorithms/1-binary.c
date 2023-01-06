#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
* @array: is a pointer to the first element of the array to search 
* @size: is the number of elements in array
* @value: is the value to search for
* REturn 
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start_index = 0, i = 0;
	size_t end_index = size - 1;
	size_t mid_index = 0;

	if (array == NULL)
		return (-1);
	while (start_index <= end_index)
	{
		mid_index = (start_index + end_index) / 2;
			i = start_index;

		printf("Searching in array:");

		for (; i <= end_index; ++i)
		{
			if (i != start_index)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid_index] > value)
		{
			end_index = mid_index - 1;
		}
		else if (array[mid_index] < value)
		{
			start_index = mid_index + 1;
		}
		else
			return (mid_index);
	}
	return -1;
}
